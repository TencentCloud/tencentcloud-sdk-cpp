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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYVERCONTENTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYVERCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20191126/model/Contents.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * ModifyVerContent请求参数结构体
                */
                class ModifyVerContentRequest : public AbstractModel
                {
                public:
                    ModifyVerContentRequest();
                    ~ModifyVerContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品id
                     * @return ProductId 产品id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品id
                     * @param _productId 产品id
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
                     * 获取需要修改的版本号
                     * @return OtaVersion 需要修改的版本号
                     * 
                     */
                    std::string GetOtaVersion() const;

                    /**
                     * 设置需要修改的版本号
                     * @param _otaVersion 需要修改的版本号
                     * 
                     */
                    void SetOtaVersion(const std::string& _otaVersion);

                    /**
                     * 判断参数 OtaVersion 是否已赋值
                     * @return OtaVersion 是否已赋值
                     * 
                     */
                    bool OtaVersionHasBeenSet() const;

                    /**
                     * 获取操作人,字符长度<=64
                     * @return Operator 操作人,字符长度<=64
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人,字符长度<=64
                     * @param _operator 操作人,字符长度<=64
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取版本发布的描述信息，需要国际化，可以为空
                     * @return Contents 版本发布的描述信息，需要国际化，可以为空
                     * 
                     */
                    Contents GetContents() const;

                    /**
                     * 设置版本发布的描述信息，需要国际化，可以为空
                     * @param _contents 版本发布的描述信息，需要国际化，可以为空
                     * 
                     */
                    void SetContents(const Contents& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                private:

                    /**
                     * 产品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 需要修改的版本号
                     */
                    std::string m_otaVersion;
                    bool m_otaVersionHasBeenSet;

                    /**
                     * 操作人,字符长度<=64
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 版本发布的描述信息，需要国际化，可以为空
                     */
                    Contents m_contents;
                    bool m_contentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYVERCONTENTREQUEST_H_
