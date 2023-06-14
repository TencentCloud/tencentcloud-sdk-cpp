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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHBACKUPPARAM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHBACKUPPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 白板推流备份相关请求参数
                */
                class WhiteboardPushBackupParam : public AbstractModel
                {
                public:
                    WhiteboardPushBackupParam();
                    ~WhiteboardPushBackupParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于白板推流服务进房的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务将使用这个用户ID进入房间进行白板推流，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常推流。
                     * @return PushUserId 用于白板推流服务进房的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务将使用这个用户ID进入房间进行白板推流，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常推流。
                     * 
                     */
                    std::string GetPushUserId() const;

                    /**
                     * 设置用于白板推流服务进房的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务将使用这个用户ID进入房间进行白板推流，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常推流。
                     * @param _pushUserId 用于白板推流服务进房的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务将使用这个用户ID进入房间进行白板推流，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常推流。
                     * 
                     */
                    void SetPushUserId(const std::string& _pushUserId);

                    /**
                     * 判断参数 PushUserId 是否已赋值
                     * @return PushUserId 是否已赋值
                     * 
                     */
                    bool PushUserIdHasBeenSet() const;

                    /**
                     * 获取与PushUserId对应的签名
                     * @return PushUserSig 与PushUserId对应的签名
                     * 
                     */
                    std::string GetPushUserSig() const;

                    /**
                     * 设置与PushUserId对应的签名
                     * @param _pushUserSig 与PushUserId对应的签名
                     * 
                     */
                    void SetPushUserSig(const std::string& _pushUserSig);

                    /**
                     * 判断参数 PushUserSig 是否已赋值
                     * @return PushUserSig 是否已赋值
                     * 
                     */
                    bool PushUserSigHasBeenSet() const;

                private:

                    /**
                     * 用于白板推流服务进房的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务将使用这个用户ID进入房间进行白板推流，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常推流。
                     */
                    std::string m_pushUserId;
                    bool m_pushUserIdHasBeenSet;

                    /**
                     * 与PushUserId对应的签名
                     */
                    std::string m_pushUserSig;
                    bool m_pushUserSigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHBACKUPPARAM_H_
