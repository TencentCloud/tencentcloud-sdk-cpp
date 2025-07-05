/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEGENCODEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEGENCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * CreateGencode请求参数结构体
                */
                class CreateGencodeRequest : public AbstractModel
                {
                public:
                    CreateGencodeRequest();
                    ~CreateGencodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取物模型发布版本号,-1代表未发布的，保存的是草稿箱的版本。1代表已发布的物模型。
                     * @return Revision 物模型发布版本号,-1代表未发布的，保存的是草稿箱的版本。1代表已发布的物模型。
                     * 
                     */
                    int64_t GetRevision() const;

                    /**
                     * 设置物模型发布版本号,-1代表未发布的，保存的是草稿箱的版本。1代表已发布的物模型。
                     * @param _revision 物模型发布版本号,-1代表未发布的，保存的是草稿箱的版本。1代表已发布的物模型。
                     * 
                     */
                    void SetRevision(const int64_t& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 物模型发布版本号,-1代表未发布的，保存的是草稿箱的版本。1代表已发布的物模型。
                     */
                    int64_t m_revision;
                    bool m_revisionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEGENCODEREQUEST_H_
