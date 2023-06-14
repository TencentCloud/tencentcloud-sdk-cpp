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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_COSAUTHMODE_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_COSAUTHMODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 任务视频cos授权信息
                */
                class CosAuthMode : public AbstractModel
                {
                public:
                    CosAuthMode();
                    ~CosAuthMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权类型，可选值： 
0：bucket授权，需要将对应bucket授权给本服务帐号（3020447271和100012301793），否则会读写cos失败； 
1：key托管，把cos的账号id和key托管于本服务，本服务会提供一个托管id； 
3：临时key授权。
注意：目前智能编辑还不支持临时key授权；画质重生目前只支持bucket授权
                     * @return Type 授权类型，可选值： 
0：bucket授权，需要将对应bucket授权给本服务帐号（3020447271和100012301793），否则会读写cos失败； 
1：key托管，把cos的账号id和key托管于本服务，本服务会提供一个托管id； 
3：临时key授权。
注意：目前智能编辑还不支持临时key授权；画质重生目前只支持bucket授权
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置授权类型，可选值： 
0：bucket授权，需要将对应bucket授权给本服务帐号（3020447271和100012301793），否则会读写cos失败； 
1：key托管，把cos的账号id和key托管于本服务，本服务会提供一个托管id； 
3：临时key授权。
注意：目前智能编辑还不支持临时key授权；画质重生目前只支持bucket授权
                     * @param _type 授权类型，可选值： 
0：bucket授权，需要将对应bucket授权给本服务帐号（3020447271和100012301793），否则会读写cos失败； 
1：key托管，把cos的账号id和key托管于本服务，本服务会提供一个托管id； 
3：临时key授权。
注意：目前智能编辑还不支持临时key授权；画质重生目前只支持bucket授权
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取cos账号托管id，Type等于1时必选。
                     * @return HostedId cos账号托管id，Type等于1时必选。
                     * 
                     */
                    std::string GetHostedId() const;

                    /**
                     * 设置cos账号托管id，Type等于1时必选。
                     * @param _hostedId cos账号托管id，Type等于1时必选。
                     * 
                     */
                    void SetHostedId(const std::string& _hostedId);

                    /**
                     * 判断参数 HostedId 是否已赋值
                     * @return HostedId 是否已赋值
                     * 
                     */
                    bool HostedIdHasBeenSet() const;

                    /**
                     * 获取cos身份识别id，Type等于3时必选。
                     * @return SecretId cos身份识别id，Type等于3时必选。
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置cos身份识别id，Type等于3时必选。
                     * @param _secretId cos身份识别id，Type等于3时必选。
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取cos身份秘钥，Type等于3时必选。
                     * @return SecretKey cos身份秘钥，Type等于3时必选。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置cos身份秘钥，Type等于3时必选。
                     * @param _secretKey cos身份秘钥，Type等于3时必选。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取临时授权 token，Type等于3时必选。
                     * @return Token 临时授权 token，Type等于3时必选。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置临时授权 token，Type等于3时必选。
                     * @param _token 临时授权 token，Type等于3时必选。
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * 授权类型，可选值： 
0：bucket授权，需要将对应bucket授权给本服务帐号（3020447271和100012301793），否则会读写cos失败； 
1：key托管，把cos的账号id和key托管于本服务，本服务会提供一个托管id； 
3：临时key授权。
注意：目前智能编辑还不支持临时key授权；画质重生目前只支持bucket授权
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * cos账号托管id，Type等于1时必选。
                     */
                    std::string m_hostedId;
                    bool m_hostedIdHasBeenSet;

                    /**
                     * cos身份识别id，Type等于3时必选。
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * cos身份秘钥，Type等于3时必选。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 临时授权 token，Type等于3时必选。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_COSAUTHMODE_H_
