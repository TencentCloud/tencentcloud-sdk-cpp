/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyInstanceWeight.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 数据库代理组读写分离信息
                */
                class ProxyGroupRwInfo : public AbstractModel
                {
                public:
                    ProxyGroupRwInfo();
                    ~ProxyGroupRwInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性
                     * @return ConsistencyType 一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性
                     * @param _consistencyType 一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性
                     * 
                     */
                    void SetConsistencyType(const std::string& _consistencyType);

                    /**
                     * 判断参数 ConsistencyType 是否已赋值
                     * @return ConsistencyType 是否已赋值
                     * 
                     */
                    bool ConsistencyTypeHasBeenSet() const;

                    /**
                     * 获取一致性超时时间
                     * @return ConsistencyTimeOut 一致性超时时间
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置一致性超时时间
                     * @param _consistencyTimeOut 一致性超时时间
                     * 
                     */
                    void SetConsistencyTimeOut(const int64_t& _consistencyTimeOut);

                    /**
                     * 判断参数 ConsistencyTimeOut 是否已赋值
                     * @return ConsistencyTimeOut 是否已赋值
                     * 
                     */
                    bool ConsistencyTimeOutHasBeenSet() const;

                    /**
                     * 获取权重模式 system-系统分配，custom-自定义
                     * @return WeightMode 权重模式 system-系统分配，custom-自定义
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置权重模式 system-系统分配，custom-自定义
                     * @param _weightMode 权重模式 system-系统分配，custom-自定义
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取是否开启故障转移
                     * @return FailOver 是否开启故障转移
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置是否开启故障转移
                     * @param _failOver 是否开启故障转移
                     * 
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取是否自动添加只读实例，yes-是，no-不自动添加
                     * @return AutoAddRo 是否自动添加只读实例，yes-是，no-不自动添加
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置是否自动添加只读实例，yes-是，no-不自动添加
                     * @param _autoAddRo 是否自动添加只读实例，yes-是，no-不自动添加
                     * 
                     */
                    void SetAutoAddRo(const std::string& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取实例权重数组
                     * @return InstanceWeights 实例权重数组
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置实例权重数组
                     * @param _instanceWeights 实例权重数组
                     * 
                     */
                    void SetInstanceWeights(const std::vector<ProxyInstanceWeight>& _instanceWeights);

                    /**
                     * 判断参数 InstanceWeights 是否已赋值
                     * @return InstanceWeights 是否已赋值
                     * 
                     */
                    bool InstanceWeightsHasBeenSet() const;

                    /**
                     * 获取是否开通读写节点，yse-是，no-否
                     * @return OpenRw 是否开通读写节点，yse-是，no-否
                     * 
                     */
                    std::string GetOpenRw() const;

                    /**
                     * 设置是否开通读写节点，yse-是，no-否
                     * @param _openRw 是否开通读写节点，yse-是，no-否
                     * 
                     */
                    void SetOpenRw(const std::string& _openRw);

                    /**
                     * 判断参数 OpenRw 是否已赋值
                     * @return OpenRw 是否已赋值
                     * 
                     */
                    bool OpenRwHasBeenSet() const;

                    /**
                     * 获取读写属性，可选值：READWRITE,READONLY
                     * @return RwType 读写属性，可选值：READWRITE,READONLY
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置读写属性，可选值：READWRITE,READONLY
                     * @param _rwType 读写属性，可选值：READWRITE,READONLY
                     * 
                     */
                    void SetRwType(const std::string& _rwType);

                    /**
                     * 判断参数 RwType 是否已赋值
                     * @return RwType 是否已赋值
                     * 
                     */
                    bool RwTypeHasBeenSet() const;

                    /**
                     * 获取事务拆分
                     * @return TransSplit 事务拆分
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置事务拆分
                     * @param _transSplit 事务拆分
                     * 
                     */
                    void SetTransSplit(const bool& _transSplit);

                    /**
                     * 判断参数 TransSplit 是否已赋值
                     * @return TransSplit 是否已赋值
                     * 
                     */
                    bool TransSplitHasBeenSet() const;

                    /**
                     * 获取连接模式，可选值：balance，nearby
                     * @return AccessMode 连接模式，可选值：balance，nearby
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置连接模式，可选值：balance，nearby
                     * @param _accessMode 连接模式，可选值：balance，nearby
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                private:

                    /**
                     * 一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * 一致性超时时间
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * 权重模式 system-系统分配，custom-自定义
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * 是否开启故障转移
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * 是否自动添加只读实例，yes-是，no-不自动添加
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * 实例权重数组
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * 是否开通读写节点，yse-是，no-否
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                    /**
                     * 读写属性，可选值：READWRITE,READONLY
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * 事务拆分
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * 连接模式，可选值：balance，nearby
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_
