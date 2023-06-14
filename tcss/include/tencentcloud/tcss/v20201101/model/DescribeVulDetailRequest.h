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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulDetail请求参数结构体
                */
                class DescribeVulDetailRequest : public AbstractModel
                {
                public:
                    DescribeVulDetailRequest();
                    ~DescribeVulDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞PocID
                     * @return PocID 漏洞PocID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置漏洞PocID
                     * @param _pocID 漏洞PocID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                private:

                    /**
                     * 漏洞PocID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDETAILREQUEST_H_
