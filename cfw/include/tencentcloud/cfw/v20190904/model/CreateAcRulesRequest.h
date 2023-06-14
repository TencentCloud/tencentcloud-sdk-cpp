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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEACRULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEACRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/RuleInfoData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateAcRules请求参数结构体
                */
                class CreateAcRulesRequest : public AbstractModel
                {
                public:
                    CreateAcRulesRequest();
                    ~CreateAcRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建规则数据
                     * @return Data 创建规则数据
                     * 
                     */
                    std::vector<RuleInfoData> GetData() const;

                    /**
                     * 设置创建规则数据
                     * @param _data 创建规则数据
                     * 
                     */
                    void SetData(const std::vector<RuleInfoData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取0：添加（默认），1：插入
                     * @return Type 0：添加（默认），1：插入
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0：添加（默认），1：插入
                     * @param _type 0：添加（默认），1：插入
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取边id
                     * @return EdgeId 边id
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置边id
                     * @param _edgeId 边id
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取访问控制规则状态
                     * @return Enable 访问控制规则状态
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置访问控制规则状态
                     * @param _enable 访问控制规则状态
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取0：添加，1：覆盖
                     * @return Overwrite 0：添加，1：覆盖
                     * 
                     */
                    uint64_t GetOverwrite() const;

                    /**
                     * 设置0：添加，1：覆盖
                     * @param _overwrite 0：添加，1：覆盖
                     * 
                     */
                    void SetOverwrite(const uint64_t& _overwrite);

                    /**
                     * 判断参数 Overwrite 是否已赋值
                     * @return Overwrite 是否已赋值
                     * 
                     */
                    bool OverwriteHasBeenSet() const;

                    /**
                     * 获取NAT实例ID, 参数Area存在的时候这个必传
                     * @return InstanceId NAT实例ID, 参数Area存在的时候这个必传
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置NAT实例ID, 参数Area存在的时候这个必传
                     * @param _instanceId NAT实例ID, 参数Area存在的时候这个必传
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
                     * 获取portScan: 来自于端口扫描, patchImport: 来自于批量导入
                     * @return From portScan: 来自于端口扫描, patchImport: 来自于批量导入
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置portScan: 来自于端口扫描, patchImport: 来自于批量导入
                     * @param _from portScan: 来自于端口扫描, patchImport: 来自于批量导入
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取NAT地域
                     * @return Area NAT地域
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT地域
                     * @param _area NAT地域
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 创建规则数据
                     */
                    std::vector<RuleInfoData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 0：添加（默认），1：插入
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 边id
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 访问控制规则状态
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 0：添加，1：覆盖
                     */
                    uint64_t m_overwrite;
                    bool m_overwriteHasBeenSet;

                    /**
                     * NAT实例ID, 参数Area存在的时候这个必传
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * portScan: 来自于端口扫描, patchImport: 来自于批量导入
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * NAT地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEACRULESREQUEST_H_
