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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_AUTHTOKEN_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_AUTHTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 认证凭据Token
                */
                class AuthToken : public AbstractModel
                {
                public:
                    AuthToken();
                    ~AuthToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取认证Token
                     * @return Token 认证Token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置认证Token
                     * @param _token 认证Token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取服务器时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentTime 服务器时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentTime() const;

                    /**
                     * 设置服务器时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentTime 服务器时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentTime(const int64_t& _currentTime);

                    /**
                     * 判断参数 CurrentTime 是否已赋值
                     * @return CurrentTime 是否已赋值
                     * 
                     */
                    bool CurrentTimeHasBeenSet() const;

                    /**
                     * 获取毫秒时间戳，根据轮转周期准确计算得到
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextRotationTime 毫秒时间戳，根据轮转周期准确计算得到
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNextRotationTime() const;

                    /**
                     * 设置毫秒时间戳，根据轮转周期准确计算得到
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextRotationTime 毫秒时间戳，根据轮转周期准确计算得到
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextRotationTime(const int64_t& _nextRotationTime);

                    /**
                     * 判断参数 NextRotationTime 是否已赋值
                     * @return NextRotationTime 是否已赋值
                     * 
                     */
                    bool NextRotationTimeHasBeenSet() const;

                    /**
                     * 获取毫秒，如果轮转失败则为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRotationTimeCost 毫秒，如果轮转失败则为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastRotationTimeCost() const;

                    /**
                     * 设置毫秒，如果轮转失败则为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRotationTimeCost 毫秒，如果轮转失败则为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastRotationTimeCost(const int64_t& _lastRotationTimeCost);

                    /**
                     * 判断参数 LastRotationTimeCost 是否已赋值
                     * @return LastRotationTimeCost 是否已赋值
                     * 
                     */
                    bool LastRotationTimeCostHasBeenSet() const;

                    /**
                     * 获取成功：success
失败：failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationStatus 成功：success
失败：failed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRotationStatus() const;

                    /**
                     * 设置成功：success
失败：failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rotationStatus 成功：success
失败：failed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRotationStatus(const std::string& _rotationStatus);

                    /**
                     * 判断参数 RotationStatus 是否已赋值
                     * @return RotationStatus 是否已赋值
                     * 
                     */
                    bool RotationStatusHasBeenSet() const;

                    /**
                     * 获取成功：success
失败：失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationMessage 成功：success
失败：失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRotationMessage() const;

                    /**
                     * 设置成功：success
失败：失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rotationMessage 成功：success
失败：失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRotationMessage(const std::string& _rotationMessage);

                    /**
                     * 判断参数 RotationMessage 是否已赋值
                     * @return RotationMessage 是否已赋值
                     * 
                     */
                    bool RotationMessageHasBeenSet() const;

                private:

                    /**
                     * 认证Token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 服务器时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * 毫秒时间戳，根据轮转周期准确计算得到
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nextRotationTime;
                    bool m_nextRotationTimeHasBeenSet;

                    /**
                     * 毫秒，如果轮转失败则为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastRotationTimeCost;
                    bool m_lastRotationTimeCostHasBeenSet;

                    /**
                     * 成功：success
失败：failed
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rotationStatus;
                    bool m_rotationStatusHasBeenSet;

                    /**
                     * 成功：success
失败：失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rotationMessage;
                    bool m_rotationMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_AUTHTOKEN_H_
