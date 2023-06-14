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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_GETPERSONGROUPINFORESPONSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_GETPERSONGROUPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/PersonGroupInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetPersonGroupInfo返回参数结构体
                */
                class GetPersonGroupInfoResponse : public AbstractModel
                {
                public:
                    GetPersonGroupInfoResponse();
                    ~GetPersonGroupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取包含此人员的人员库及描述字段内容列表
                     * @return PersonGroupInfos 包含此人员的人员库及描述字段内容列表
                     * 
                     */
                    std::vector<PersonGroupInfo> GetPersonGroupInfos() const;

                    /**
                     * 判断参数 PersonGroupInfos 是否已赋值
                     * @return PersonGroupInfos 是否已赋值
                     * 
                     */
                    bool PersonGroupInfosHasBeenSet() const;

                    /**
                     * 获取人员库总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupNum 人员库总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGroupNum() const;

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取人脸识别服务所用的算法模型版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaceModelVersion 人脸识别服务所用的算法模型版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * 包含此人员的人员库及描述字段内容列表
                     */
                    std::vector<PersonGroupInfo> m_personGroupInfos;
                    bool m_personGroupInfosHasBeenSet;

                    /**
                     * 人员库总数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * 人脸识别服务所用的算法模型版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_GETPERSONGROUPINFORESPONSE_H_
