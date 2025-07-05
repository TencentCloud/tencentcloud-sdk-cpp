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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DELETELIBSAMPLESRESPONSE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DELETELIBSAMPLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/DeleteSampleDetails.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * DeleteLibSamples返回参数结构体
                */
                class DeleteLibSamplesResponse : public AbstractModel
                {
                public:
                    DeleteLibSamplesResponse();
                    ~DeleteLibSamplesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取删除成功的数量
                     * @return Count 删除成功的数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取每个关键词删除的结果
                     * @return Details 每个关键词删除的结果
                     * 
                     */
                    std::vector<DeleteSampleDetails> GetDetails() const;

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 删除成功的数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 每个关键词删除的结果
                     */
                    std::vector<DeleteSampleDetails> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DELETELIBSAMPLESRESPONSE_H_
