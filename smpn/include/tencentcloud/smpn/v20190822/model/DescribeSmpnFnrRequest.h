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

#ifndef TENCENTCLOUD_SMPN_V20190822_MODEL_DESCRIBESMPNFNRREQUEST_H_
#define TENCENTCLOUD_SMPN_V20190822_MODEL_DESCRIBESMPNFNRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smpn/v20190822/model/FNRRequest.h>


namespace TencentCloud
{
    namespace Smpn
    {
        namespace V20190822
        {
            namespace Model
            {
                /**
                * DescribeSmpnFnr请求参数结构体
                */
                class DescribeSmpnFnrRequest : public AbstractModel
                {
                public:
                    DescribeSmpnFnrRequest();
                    ~DescribeSmpnFnrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取虚假号码识别请求内容
                     * @return RequestData 虚假号码识别请求内容
                     * 
                     */
                    FNRRequest GetRequestData() const;

                    /**
                     * 设置虚假号码识别请求内容
                     * @param _requestData 虚假号码识别请求内容
                     * 
                     */
                    void SetRequestData(const FNRRequest& _requestData);

                    /**
                     * 判断参数 RequestData 是否已赋值
                     * @return RequestData 是否已赋值
                     * 
                     */
                    bool RequestDataHasBeenSet() const;

                    /**
                     * 获取用于计费的资源ID
                     * @return ResourceId 用于计费的资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置用于计费的资源ID
                     * @param _resourceId 用于计费的资源ID
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
                     * 虚假号码识别请求内容
                     */
                    FNRRequest m_requestData;
                    bool m_requestDataHasBeenSet;

                    /**
                     * 用于计费的资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMPN_V20190822_MODEL_DESCRIBESMPNFNRREQUEST_H_
