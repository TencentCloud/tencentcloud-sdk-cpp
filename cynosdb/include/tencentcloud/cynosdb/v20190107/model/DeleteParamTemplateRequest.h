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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEPARAMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEPARAMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DeleteParamTemplate请求参数结构体
                */
                class DeleteParamTemplateRequest : public AbstractModel
                {
                public:
                    DeleteParamTemplateRequest();
                    ~DeleteParamTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板ID
                     * @return TemplateId 参数模板ID
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置参数模板ID
                     * @param _templateId 参数模板ID
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
                     * 参数模板ID
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETEPARAMTEMPLATEREQUEST_H_
