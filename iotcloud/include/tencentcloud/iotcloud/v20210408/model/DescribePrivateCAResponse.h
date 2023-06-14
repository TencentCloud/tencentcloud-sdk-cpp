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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECARESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/CertInfo.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribePrivateCA返回参数结构体
                */
                class DescribePrivateCAResponse : public AbstractModel
                {
                public:
                    DescribePrivateCAResponse();
                    ~DescribePrivateCAResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取私有化CA详情
                     * @return CA 私有化CA详情
                     * 
                     */
                    CertInfo GetCA() const;

                    /**
                     * 判断参数 CA 是否已赋值
                     * @return CA 是否已赋值
                     * 
                     */
                    bool CAHasBeenSet() const;

                private:

                    /**
                     * 私有化CA详情
                     */
                    CertInfo m_cA;
                    bool m_cAHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECARESPONSE_H_
