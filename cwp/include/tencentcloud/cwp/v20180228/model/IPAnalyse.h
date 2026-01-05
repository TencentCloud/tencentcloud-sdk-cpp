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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_IPANALYSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_IPANALYSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ip 分析
                */
                class IPAnalyse : public AbstractModel
                {
                public:
                    IPAnalyse();
                    ~IPAnalyse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0 安全
1 可疑
2 恶意
3 未知
                     * @return Status 0 安全
1 可疑
2 恶意
3 未知
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0 安全
1 可疑
2 恶意
3 未知
                     * @param _status 0 安全
1 可疑
2 恶意
3 未知
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取标签特征
                     * @return Tags 标签特征
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签特征
                     * @param _tags 标签特征
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取家族信息
                     * @return Family 家族信息
                     * 
                     */
                    std::vector<std::string> GetFamily() const;

                    /**
                     * 设置家族信息
                     * @param _family 家族信息
                     * 
                     */
                    void SetFamily(const std::vector<std::string>& _family);

                    /**
                     * 判断参数 Family 是否已赋值
                     * @return Family 是否已赋值
                     * 
                     */
                    bool FamilyHasBeenSet() const;

                    /**
                     * 获取画像
                     * @return Profile 画像
                     * 
                     */
                    std::vector<std::string> GetProfile() const;

                    /**
                     * 设置画像
                     * @param _profile 画像
                     * 
                     */
                    void SetProfile(const std::vector<std::string>& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取运营商
                     * @return Isp 运营商
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置运营商
                     * @param _isp 运营商
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                private:

                    /**
                     * 0 安全
1 可疑
2 恶意
3 未知
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 标签特征
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 家族信息
                     */
                    std::vector<std::string> m_family;
                    bool m_familyHasBeenSet;

                    /**
                     * 画像
                     */
                    std::vector<std::string> m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 运营商
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_IPANALYSE_H_
