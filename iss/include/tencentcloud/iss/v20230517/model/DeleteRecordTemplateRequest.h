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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DELETERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DELETERECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DeleteRecordTemplate请求参数结构体
                */
                class DeleteRecordTemplateRequest : public AbstractModel
                {
                public:
                    DeleteRecordTemplateRequest();
                    ~DeleteRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板ID
                     * @return TemplateId 模板ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param _templateId 模板ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DELETERECORDTEMPLATEREQUEST_H_
