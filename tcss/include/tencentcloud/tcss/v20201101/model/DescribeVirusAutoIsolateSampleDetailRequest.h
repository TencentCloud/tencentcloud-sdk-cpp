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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSAUTOISOLATESAMPLEDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSAUTOISOLATESAMPLEDETAILREQUEST_H_

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
                * DescribeVirusAutoIsolateSampleDetail请求参数结构体
                */
                class DescribeVirusAutoIsolateSampleDetailRequest : public AbstractModel
                {
                public:
                    DescribeVirusAutoIsolateSampleDetailRequest();
                    ~DescribeVirusAutoIsolateSampleDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件MD5值
                     * @return MD5 文件MD5值
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置文件MD5值
                     * @param _mD5 文件MD5值
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                private:

                    /**
                     * 文件MD5值
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSAUTOISOLATESAMPLEDETAILREQUEST_H_
