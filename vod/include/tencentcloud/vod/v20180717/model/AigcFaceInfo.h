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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcFaceIdentityInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 人脸信息
                */
                class AigcFaceInfo : public AbstractModel
                {
                public:
                    AigcFaceInfo();
                    ~AigcFaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主体 ID。需自行记录下返回的主体 ID。
                     * @return SessionId 主体 ID。需自行记录下返回的主体 ID。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置主体 ID。需自行记录下返回的主体 ID。
                     * @param _sessionId 主体 ID。需自行记录下返回的主体 ID。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取人脸信息列表。
                     * @return FaceInfoList 人脸信息列表。
                     * 
                     */
                    std::vector<AigcFaceIdentityInfo> GetFaceInfoList() const;

                    /**
                     * 设置人脸信息列表。
                     * @param _faceInfoList 人脸信息列表。
                     * 
                     */
                    void SetFaceInfoList(const std::vector<AigcFaceIdentityInfo>& _faceInfoList);

                    /**
                     * 判断参数 FaceInfoList 是否已赋值
                     * @return FaceInfoList 是否已赋值
                     * 
                     */
                    bool FaceInfoListHasBeenSet() const;

                private:

                    /**
                     * 主体 ID。需自行记录下返回的主体 ID。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 人脸信息列表。
                     */
                    std::vector<AigcFaceIdentityInfo> m_faceInfoList;
                    bool m_faceInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEINFO_H_
