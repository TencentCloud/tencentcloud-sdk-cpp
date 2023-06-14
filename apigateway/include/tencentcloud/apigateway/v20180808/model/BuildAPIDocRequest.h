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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BUILDAPIDOCREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BUILDAPIDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * BuildAPIDoc请求参数结构体
                */
                class BuildAPIDocRequest : public AbstractModel
                {
                public:
                    BuildAPIDocRequest();
                    ~BuildAPIDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API文档ID
                     * @return ApiDocId API文档ID
                     * 
                     */
                    std::string GetApiDocId() const;

                    /**
                     * 设置API文档ID
                     * @param _apiDocId API文档ID
                     * 
                     */
                    void SetApiDocId(const std::string& _apiDocId);

                    /**
                     * 判断参数 ApiDocId 是否已赋值
                     * @return ApiDocId 是否已赋值
                     * 
                     */
                    bool ApiDocIdHasBeenSet() const;

                private:

                    /**
                     * API文档ID
                     */
                    std::string m_apiDocId;
                    bool m_apiDocIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BUILDAPIDOCREQUEST_H_
