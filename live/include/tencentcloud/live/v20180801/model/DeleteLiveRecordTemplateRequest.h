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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVERECORDTEMPLATEREQUEST_H_

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
                * DeleteLiveRecordTemplate请求参数结构体
                */
                class DeleteLiveRecordTemplateRequest : public AbstractModel
                {
                public:
                    DeleteLiveRecordTemplateRequest();
                    ~DeleteLiveRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DescribeRecordTemplates接口获取到的模板 ID。
                     * @return TemplateId DescribeRecordTemplates接口获取到的模板 ID。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置DescribeRecordTemplates接口获取到的模板 ID。
                     * @param _templateId DescribeRecordTemplates接口获取到的模板 ID。
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
                     * DescribeRecordTemplates接口获取到的模板 ID。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVERECORDTEMPLATEREQUEST_H_
