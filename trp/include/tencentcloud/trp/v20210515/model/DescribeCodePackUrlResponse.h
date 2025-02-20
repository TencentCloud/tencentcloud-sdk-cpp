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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODEPACKURLRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODEPACKURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeCodePackUrl返回参数结构体
                */
                class DescribeCodePackUrlResponse : public AbstractModel
                {
                public:
                    DescribeCodePackUrlResponse();
                    ~DescribeCodePackUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文字码包地址
                     * @return Url 文字码包地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取图片码包地址，可能为空
                     * @return ImgUrl 图片码包地址，可能为空
                     * 
                     */
                    std::string GetImgUrl() const;

                    /**
                     * 判断参数 ImgUrl 是否已赋值
                     * @return ImgUrl 是否已赋值
                     * 
                     */
                    bool ImgUrlHasBeenSet() const;

                    /**
                     * 获取文字码包Key，用于上传导入
                     * @return FileKey 文字码包Key，用于上传导入
                     * 
                     */
                    std::string GetFileKey() const;

                    /**
                     * 判断参数 FileKey 是否已赋值
                     * @return FileKey 是否已赋值
                     * 
                     */
                    bool FileKeyHasBeenSet() const;

                private:

                    /**
                     * 文字码包地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 图片码包地址，可能为空
                     */
                    std::string m_imgUrl;
                    bool m_imgUrlHasBeenSet;

                    /**
                     * 文字码包Key，用于上传导入
                     */
                    std::string m_fileKey;
                    bool m_fileKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODEPACKURLRESPONSE_H_
