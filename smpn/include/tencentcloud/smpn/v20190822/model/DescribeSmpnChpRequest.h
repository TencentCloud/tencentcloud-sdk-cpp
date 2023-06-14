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

#ifndef TENCENTCLOUD_SMPN_V20190822_MODEL_DESCRIBESMPNCHPREQUEST_H_
#define TENCENTCLOUD_SMPN_V20190822_MODEL_DESCRIBESMPNCHPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smpn/v20190822/model/CHPRequest.h>


namespace TencentCloud
{
    namespace Smpn
    {
        namespace V20190822
        {
            namespace Model
            {
                /**
                * DescribeSmpnChp请求参数结构体
                */
                class DescribeSmpnChpRequest : public AbstractModel
                {
                public:
                    DescribeSmpnChpRequest();
                    ~DescribeSmpnChpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户用于计费的资源Id
                     * @return ResourceId 客户用于计费的资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置客户用于计费的资源Id
                     * @param _resourceId 客户用于计费的资源Id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取终端骚扰保护请求
                     * @return RequestData 终端骚扰保护请求
                     * 
                     */
                    CHPRequest GetRequestData() const;

                    /**
                     * 设置终端骚扰保护请求
                     * @param _requestData 终端骚扰保护请求
                     * 
                     */
                    void SetRequestData(const CHPRequest& _requestData);

                    /**
                     * 判断参数 RequestData 是否已赋值
                     * @return RequestData 是否已赋值
                     * 
                     */
                    bool RequestDataHasBeenSet() const;

                private:

                    /**
                     * 客户用于计费的资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 终端骚扰保护请求
                     */
                    CHPRequest m_requestData;
                    bool m_requestDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMPN_V20190822_MODEL_DESCRIBESMPNCHPREQUEST_H_
