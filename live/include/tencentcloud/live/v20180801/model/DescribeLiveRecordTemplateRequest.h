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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveRecordTemplate请求参数结构体
                */
                class DescribeLiveRecordTemplateRequest : public AbstractModel
                {
                public:
                    DescribeLiveRecordTemplateRequest();
                    ~DescribeLiveRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取[DescribeLiveRecordTemplates](/document/product/267/32609)接口获取到的模板 ID。
                     * @return TemplateId [DescribeLiveRecordTemplates](/document/product/267/32609)接口获取到的模板 ID。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置[DescribeLiveRecordTemplates](/document/product/267/32609)接口获取到的模板 ID。
                     * @param _templateId [DescribeLiveRecordTemplates](/document/product/267/32609)接口获取到的模板 ID。
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * [DescribeLiveRecordTemplates](/document/product/267/32609)接口获取到的模板 ID。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVERECORDTEMPLATEREQUEST_H_
