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
                     * 获取仿冒网址下载链接：请严格按照模版要求填写，https://bma-privacy-detection-1251316161.cosgz.myqcloud.com/20221124/ff3273b24104d03fa3a8d0629a7f71a9/批量仿冒网址举报模板.xlsx
                     * @return FakeURLs 仿冒网址下载链接：请严格按照模版要求填写，https://bma-privacy-detection-1251316161.cosgz.myqcloud.com/20221124/ff3273b24104d03fa3a8d0629a7f71a9/批量仿冒网址举报模板.xlsx
                     */
                    std::string GetFakeURLs() const;

                    /**
                     * 设置仿冒网址下载链接：请严格按照模版要求填写，https://bma-privacy-detection-1251316161.cosgz.myqcloud.com/20221124/ff3273b24104d03fa3a8d0629a7f71a9/批量仿冒网址举报模板.xlsx
                     * @param FakeURLs 仿冒网址下载链接：请严格按照模版要求填写，https://bma-privacy-detection-1251316161.cosgz.myqcloud.com/20221124/ff3273b24104d03fa3a8d0629a7f71a9/批量仿冒网址举报模板.xlsx
                     */
                    void SetFakeURLs(const std::string& _fakeURLs);

                    /**
                     * 判断参数 FakeURLs 是否已赋值
                     * @return FakeURLs 是否已赋值
                     */
                    bool FakeURLsHasBeenSet() const;

                private:

                    /**
                     * 仿冒网址下载链接：请严格按照模版要求填写，https://bma-privacy-detection-1251316161.cosgz.myqcloud.com/20221124/ff3273b24104d03fa3a8d0629a7f71a9/批量仿冒网址举报模板.xlsx
                     */
                    std::string m_fakeURLs;
                    bool m_fakeURLsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLSREQUEST_H_
