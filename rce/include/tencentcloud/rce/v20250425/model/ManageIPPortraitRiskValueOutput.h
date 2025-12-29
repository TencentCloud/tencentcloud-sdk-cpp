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

#ifndef TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKVALUEOUTPUT_H_
#define TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKVALUEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20250425
        {
            namespace Model
            {
                /**
                * 业务出参
                */
                class ManageIPPortraitRiskValueOutput : public AbstractModel
                {
                public:
                    ManageIPPortraitRiskValueOutput();
                    ~ManageIPPortraitRiskValueOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应的IP
                     * @return UserIp 对应的IP
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置对应的IP
                     * @param _userIp 对应的IP
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     * @return RiskScore 返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     * 
                     */
                    int64_t GetRiskScore() const;

                    /**
                     * 设置返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     * @param _riskScore 返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     * 
                     */
                    void SetRiskScore(const int64_t& _riskScore);

                    /**
                     * 判断参数 RiskScore 是否已赋值
                     * @return RiskScore 是否已赋值
                     * 
                     */
                    bool RiskScoreHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return RiskType 风险类型
                     * 
                     */
                    std::vector<int64_t> GetRiskType() const;

                    /**
                     * 设置风险类型
                     * @param _riskType 风险类型
                     * 
                     */
                    void SetRiskType(const std::vector<int64_t>& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                private:

                    /**
                     * 对应的IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     */
                    int64_t m_riskScore;
                    bool m_riskScoreHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::vector<int64_t> m_riskType;
                    bool m_riskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20250425_MODEL_MANAGEIPPORTRAITRISKVALUEOUTPUT_H_
