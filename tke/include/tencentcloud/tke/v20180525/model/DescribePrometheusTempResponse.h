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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSTEMPRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSTEMPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusTemp.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribePrometheusTemp返回参数结构体
                */
                class DescribePrometheusTempResponse : public AbstractModel
                {
                public:
                    DescribePrometheusTempResponse();
                    ~DescribePrometheusTempResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板列表
                     * @return Templates 模板列表
                     */
                    std::vector<PrometheusTemp> GetTemplates() const;

                    /**
                     * 判断参数 Templates 是否已赋值
                     * @return Templates 是否已赋值
                     */
                    bool TemplatesHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 模板列表
                     */
                    std::vector<PrometheusTemp> m_templates;
                    bool m_templatesHasBeenSet;

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSTEMPRESPONSE_H_
