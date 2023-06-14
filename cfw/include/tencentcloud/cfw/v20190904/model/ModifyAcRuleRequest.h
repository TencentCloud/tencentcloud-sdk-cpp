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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYACRULEREQUEST_H_

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
                * ModifyAcRule请求参数结构体
                */
                class ModifyAcRuleRequest : public AbstractModel
                {
                public:
                    ModifyAcRuleRequest();
                    ~ModifyAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则数组
                     * @return Data 规则数组
                     * 
                     */
                    std::vector<RuleInfoData> GetData() const;

                    /**
                     * 设置规则数组
                     * @param _data 规则数组
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
                     * 获取EdgeId值
                     * @return EdgeId EdgeId值
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置EdgeId值
                     * @param _edgeId EdgeId值
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
                     * 获取访问规则状态
                     * @return Enable 访问规则状态
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置访问规则状态
                     * @param _enable 访问规则状态
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
                     * 规则数组
                     */
                    std::vector<RuleInfoData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * EdgeId值
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 访问规则状态
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

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

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYACRULEREQUEST_H_
