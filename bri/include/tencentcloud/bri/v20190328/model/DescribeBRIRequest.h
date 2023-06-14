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

#ifndef TENCENTCLOUD_BRI_V20190328_MODEL_DESCRIBEBRIREQUEST_H_
#define TENCENTCLOUD_BRI_V20190328_MODEL_DESCRIBEBRIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bri/v20190328/model/BRIRequest.h>


namespace TencentCloud
{
    namespace Bri
    {
        namespace V20190328
        {
            namespace Model
            {
                /**
                * DescribeBRI请求参数结构体
                */
                class DescribeBRIRequest : public AbstractModel
                {
                public:
                    DescribeBRIRequest();
                    ~DescribeBRIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务风险情报请求体
                     * @return RequestData 业务风险情报请求体
                     * 
                     */
                    BRIRequest GetRequestData() const;

                    /**
                     * 设置业务风险情报请求体
                     * @param _requestData 业务风险情报请求体
                     * 
                     */
                    void SetRequestData(const BRIRequest& _requestData);

                    /**
                     * 判断参数 RequestData 是否已赋值
                     * @return RequestData 是否已赋值
                     * 
                     */
                    bool RequestDataHasBeenSet() const;

                    /**
                     * 获取客户用于计费的资源ID
                     * @return ResourceId 客户用于计费的资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置客户用于计费的资源ID
                     * @param _resourceId 客户用于计费的资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 业务风险情报请求体
                     */
                    BRIRequest m_requestData;
                    bool m_requestDataHasBeenSet;

                    /**
                     * 客户用于计费的资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BRI_V20190328_MODEL_DESCRIBEBRIREQUEST_H_
