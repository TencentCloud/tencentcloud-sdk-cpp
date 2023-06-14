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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEBUSINESSLOGCONFIGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEBUSINESSLOGCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeBusinessLogConfigs请求参数结构体
                */
                class DescribeBusinessLogConfigsRequest : public AbstractModel
                {
                public:
                    DescribeBusinessLogConfigsRequest();
                    ~DescribeBusinessLogConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，取值范围大于等于0，默认值为0
                     * @return Offset 偏移量，取值范围大于等于0，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，取值范围大于等于0，默认值为0
                     * @param _offset 偏移量，取值范围大于等于0，默认值为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单页请求配置数量，取值范围[1, 50]，默认值为10
                     * @return Limit 单页请求配置数量，取值范围[1, 50]，默认值为10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单页请求配置数量，取值范围[1, 50]，默认值为10
                     * @param _limit 单页请求配置数量，取值范围[1, 50]，默认值为10
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取模糊匹配关键词
                     * @return SearchWord 模糊匹配关键词
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置模糊匹配关键词
                     * @param _searchWord 模糊匹配关键词
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取无
                     * @return DisableProgramAuthCheck 无
                     * 
                     */
                    bool GetDisableProgramAuthCheck() const;

                    /**
                     * 设置无
                     * @param _disableProgramAuthCheck 无
                     * 
                     */
                    void SetDisableProgramAuthCheck(const bool& _disableProgramAuthCheck);

                    /**
                     * 判断参数 DisableProgramAuthCheck 是否已赋值
                     * @return DisableProgramAuthCheck 是否已赋值
                     * 
                     */
                    bool DisableProgramAuthCheckHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ConfigIdList 无
                     * 
                     */
                    std::vector<std::string> GetConfigIdList() const;

                    /**
                     * 设置无
                     * @param _configIdList 无
                     * 
                     */
                    void SetConfigIdList(const std::vector<std::string>& _configIdList);

                    /**
                     * 判断参数 ConfigIdList 是否已赋值
                     * @return ConfigIdList 是否已赋值
                     * 
                     */
                    bool ConfigIdListHasBeenSet() const;

                private:

                    /**
                     * 偏移量，取值范围大于等于0，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单页请求配置数量，取值范围[1, 50]，默认值为10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 模糊匹配关键词
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 无
                     */
                    bool m_disableProgramAuthCheck;
                    bool m_disableProgramAuthCheckHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_configIdList;
                    bool m_configIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEBUSINESSLOGCONFIGSREQUEST_H_
