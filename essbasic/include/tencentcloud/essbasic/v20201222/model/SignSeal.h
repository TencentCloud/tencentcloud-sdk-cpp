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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SIGNSEAL_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SIGNSEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (SignSeal) 用于描述签名/印章信息。
                */
                class SignSeal : public AbstractModel
                {
                public:
                    SignSeal();
                    ~SignSeal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署控件ID
                     * @return ComponentId 签署控件ID
                     * 
                     */
                    std::string GetComponentId() const;

                    /**
                     * 设置签署控件ID
                     * @param _componentId 签署控件ID
                     * 
                     */
                    void SetComponentId(const std::string& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取签署印章类型:
SIGN_SIGNATURE - 签名
SIGN_SEAL - 印章
SIGN_DATE - 日期
SIGN_IMAGE - 图片
                     * @return SignType 签署印章类型:
SIGN_SIGNATURE - 签名
SIGN_SEAL - 印章
SIGN_DATE - 日期
SIGN_IMAGE - 图片
                     * 
                     */
                    std::string GetSignType() const;

                    /**
                     * 设置签署印章类型:
SIGN_SIGNATURE - 签名
SIGN_SEAL - 印章
SIGN_DATE - 日期
SIGN_IMAGE - 图片
                     * @param _signType 签署印章类型:
SIGN_SIGNATURE - 签名
SIGN_SEAL - 印章
SIGN_DATE - 日期
SIGN_IMAGE - 图片
                     * 
                     */
                    void SetSignType(const std::string& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     * 
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取合同文件ID
                     * @return FileIndex 合同文件ID
                     * 
                     */
                    int64_t GetFileIndex() const;

                    /**
                     * 设置合同文件ID
                     * @param _fileIndex 合同文件ID
                     * 
                     */
                    void SetFileIndex(const int64_t& _fileIndex);

                    /**
                     * 判断参数 FileIndex 是否已赋值
                     * @return FileIndex 是否已赋值
                     * 
                     */
                    bool FileIndexHasBeenSet() const;

                    /**
                     * 获取印章ID，仅当 SignType 为 SIGN_SEAL 时必填
                     * @return SealId 印章ID，仅当 SignType 为 SIGN_SEAL 时必填
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置印章ID，仅当 SignType 为 SIGN_SEAL 时必填
                     * @param _sealId 印章ID，仅当 SignType 为 SIGN_SEAL 时必填
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取签名内容，仅当 SignType 为SIGN_SIGNATURE或SIGN_IMAGE 时必填，base64编码
                     * @return SealContent 签名内容，仅当 SignType 为SIGN_SIGNATURE或SIGN_IMAGE 时必填，base64编码
                     * 
                     */
                    std::string GetSealContent() const;

                    /**
                     * 设置签名内容，仅当 SignType 为SIGN_SIGNATURE或SIGN_IMAGE 时必填，base64编码
                     * @param _sealContent 签名内容，仅当 SignType 为SIGN_SIGNATURE或SIGN_IMAGE 时必填，base64编码
                     * 
                     */
                    void SetSealContent(const std::string& _sealContent);

                    /**
                     * 判断参数 SealContent 是否已赋值
                     * @return SealContent 是否已赋值
                     * 
                     */
                    bool SealContentHasBeenSet() const;

                private:

                    /**
                     * 签署控件ID
                     */
                    std::string m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * 签署印章类型:
SIGN_SIGNATURE - 签名
SIGN_SEAL - 印章
SIGN_DATE - 日期
SIGN_IMAGE - 图片
                     */
                    std::string m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * 合同文件ID
                     */
                    int64_t m_fileIndex;
                    bool m_fileIndexHasBeenSet;

                    /**
                     * 印章ID，仅当 SignType 为 SIGN_SEAL 时必填
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 签名内容，仅当 SignType 为SIGN_SIGNATURE或SIGN_IMAGE 时必填，base64编码
                     */
                    std::string m_sealContent;
                    bool m_sealContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SIGNSEAL_H_
