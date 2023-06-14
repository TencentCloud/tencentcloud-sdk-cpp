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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKFACEIDENTIFYRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKFACEIDENTIFYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CheckFaceIdentify返回参数结构体
                */
                class CheckFaceIdentifyResponse : public AbstractModel
                {
                public:
                    CheckFaceIdentifyResponse();
                    ~CheckFaceIdentifyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取核身结果; 0:通过,1:不通过
                     * @return Result 核身结果; 0:通过,1:不通过
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取核身结果描述
                     * @return Description 核身结果描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取渠道名
                     * @return ChannelName 渠道名
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取认证通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifiedOn 认证通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVerifiedOn() const;

                    /**
                     * 判断参数 VerifiedOn 是否已赋值
                     * @return VerifiedOn 是否已赋值
                     * 
                     */
                    bool VerifiedOnHasBeenSet() const;

                    /**
                     * 获取核身流水号
                     * @return SerialNumber 核身流水号
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取渠道核身服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyServerIp 渠道核身服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyServerIp() const;

                    /**
                     * 判断参数 VerifyServerIp 是否已赋值
                     * @return VerifyServerIp 是否已赋值
                     * 
                     */
                    bool VerifyServerIpHasBeenSet() const;

                    /**
                     * 获取核身照片文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhotoFileName 核身照片文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhotoFileName() const;

                    /**
                     * 判断参数 PhotoFileName 是否已赋值
                     * @return PhotoFileName 是否已赋值
                     * 
                     */
                    bool PhotoFileNameHasBeenSet() const;

                    /**
                     * 获取核身照片内容base64(文件格式见文件名后缀,一般为jpg)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhotoFileData 核身照片内容base64(文件格式见文件名后缀,一般为jpg)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhotoFileData() const;

                    /**
                     * 判断参数 PhotoFileData 是否已赋值
                     * @return PhotoFileData 是否已赋值
                     * 
                     */
                    bool PhotoFileDataHasBeenSet() const;

                private:

                    /**
                     * 核身结果; 0:通过,1:不通过
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 核身结果描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 渠道名
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 认证通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_verifiedOn;
                    bool m_verifiedOnHasBeenSet;

                    /**
                     * 核身流水号
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 渠道核身服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyServerIp;
                    bool m_verifyServerIpHasBeenSet;

                    /**
                     * 核身照片文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_photoFileName;
                    bool m_photoFileNameHasBeenSet;

                    /**
                     * 核身照片内容base64(文件格式见文件名后缀,一般为jpg)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_photoFileData;
                    bool m_photoFileDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKFACEIDENTIFYRESPONSE_H_
