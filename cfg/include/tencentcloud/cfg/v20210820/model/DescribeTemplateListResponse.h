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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETEMPLATELISTRESPONSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETEMPLATELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TemplateListItem.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTemplateList返回参数结构体
                */
                class DescribeTemplateListResponse : public AbstractModel
                {
                public:
                    DescribeTemplateListResponse();
                    ~DescribeTemplateListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取经验库列表
                     * @return TemplateList 经验库列表
                     * 
                     */
                    std::vector<TemplateListItem> GetTemplateList() const;

                    /**
                     * 判断参数 TemplateList 是否已赋值
                     * @return TemplateList 是否已赋值
                     * 
                     */
                    bool TemplateListHasBeenSet() const;

                    /**
                     * 获取列表数量
                     * @return Total 列表数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 经验库列表
                     */
                    std::vector<TemplateListItem> m_templateList;
                    bool m_templateListHasBeenSet;

                    /**
                     * 列表数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETEMPLATELISTRESPONSE_H_
