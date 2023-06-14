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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLSREQUEST_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * CreateBPFakeURLs请求参数结构体
                */
                class CreateBPFakeURLsRequest : public AbstractModel
                {
                public:
                    CreateBPFakeURLsRequest();
                    ~CreateBPFakeURLsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量模板
                     * @return FakeURLs 批量模板
                     * 
                     */
                    std::string GetFakeURLs() const;

                    /**
                     * 设置批量模板
                     * @param _fakeURLs 批量模板
                     * 
                     */
                    void SetFakeURLs(const std::string& _fakeURLs);

                    /**
                     * 判断参数 FakeURLs 是否已赋值
                     * @return FakeURLs 是否已赋值
                     * 
                     */
                    bool FakeURLsHasBeenSet() const;

                private:

                    /**
                     * 批量模板
                     */
                    std::string m_fakeURLs;
                    bool m_fakeURLsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLSREQUEST_H_
