/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESERVERLESSQUOTAINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESERVERLESSQUOTAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 实例serverless弹性配置详情
                */
                class InstanceServerlessQuotaInfo : public AbstractModel
                {
                public:
                    InstanceServerlessQuotaInfo();
                    ~InstanceServerlessQuotaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例类型</p><p>枚举值：</p><ul><li>rw： 读写</li><li>ro： 只读</li></ul>
                     * @return InstanceType <p>实例类型</p><p>枚举值：</p><ul><li>rw： 读写</li><li>ro： 只读</li></ul>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型</p><p>枚举值：</p><ul><li>rw： 读写</li><li>ro： 只读</li></ul>
                     * @param _instanceType <p>实例类型</p><p>枚举值：</p><ul><li>rw： 读写</li><li>ro： 只读</li></ul>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>最大CCU规格</p>
                     * @return MaxCcu <p>最大CCU规格</p>
                     * 
                     */
                    double GetMaxCcu() const;

                    /**
                     * 设置<p>最大CCU规格</p>
                     * @param _maxCcu <p>最大CCU规格</p>
                     * 
                     */
                    void SetMaxCcu(const double& _maxCcu);

                    /**
                     * 判断参数 MaxCcu 是否已赋值
                     * @return MaxCcu 是否已赋值
                     * 
                     */
                    bool MaxCcuHasBeenSet() const;

                    /**
                     * 获取<p>实例Serverless弹性开启状态</p><p>枚举值：</p><ul><li>opening： 开启中</li><li>opened： 已开启</li><li>closing： 关闭中</li><li>closed： 已关闭</li></ul>
                     * @return Status <p>实例Serverless弹性开启状态</p><p>枚举值：</p><ul><li>opening： 开启中</li><li>opened： 已开启</li><li>closing： 关闭中</li><li>closed： 已关闭</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>实例Serverless弹性开启状态</p><p>枚举值：</p><ul><li>opening： 开启中</li><li>opened： 已开启</li><li>closing： 关闭中</li><li>closed： 已关闭</li></ul>
                     * @param _status <p>实例Serverless弹性开启状态</p><p>枚举值：</p><ul><li>opening： 开启中</li><li>opened： 已开启</li><li>closing： 关闭中</li><li>closed： 已关闭</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>开启Serverless弹性的时间</p>
                     * @return EnableTime <p>开启Serverless弹性的时间</p>
                     * 
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置<p>开启Serverless弹性的时间</p>
                     * @param _enableTime <p>开启Serverless弹性的时间</p>
                     * 
                     */
                    void SetEnableTime(const std::string& _enableTime);

                    /**
                     * 判断参数 EnableTime 是否已赋值
                     * @return EnableTime 是否已赋值
                     * 
                     */
                    bool EnableTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例类型</p><p>枚举值：</p><ul><li>rw： 读写</li><li>ro： 只读</li></ul>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>最大CCU规格</p>
                     */
                    double m_maxCcu;
                    bool m_maxCcuHasBeenSet;

                    /**
                     * <p>实例Serverless弹性开启状态</p><p>枚举值：</p><ul><li>opening： 开启中</li><li>opened： 已开启</li><li>closing： 关闭中</li><li>closed： 已关闭</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>开启Serverless弹性的时间</p>
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESERVERLESSQUOTAINFO_H_
