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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_MANUALREVIEWDATA_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_MANUALREVIEWDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 人工审核接口返回结果，由ContentId和BatchId组成
                */
                class ManualReviewData : public AbstractModel
                {
                public:
                    ManualReviewData();
                    ~ManualReviewData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人审内容批次号
                     * @return BatchId 人审内容批次号
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置人审内容批次号
                     * @param BatchId 人审内容批次号
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取人审内容ID
                     * @return ContentId 人审内容ID
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置人审内容ID
                     * @param ContentId 人审内容ID
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     */
                    bool ContentIdHasBeenSet() const;

                private:

                    /**
                     * 人审内容批次号
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 人审内容ID
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_MANUALREVIEWDATA_H_
