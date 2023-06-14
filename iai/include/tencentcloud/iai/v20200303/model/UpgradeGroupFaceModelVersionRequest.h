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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_UPGRADEGROUPFACEMODELVERSIONREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_UPGRADEGROUPFACEMODELVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * UpgradeGroupFaceModelVersion请求参数结构体
                */
                class UpgradeGroupFaceModelVersionRequest : public AbstractModel
                {
                public:
                    UpgradeGroupFaceModelVersionRequest();
                    ~UpgradeGroupFaceModelVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要升级的人员库ID。
                     * @return GroupId 需要升级的人员库ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置需要升级的人员库ID。
                     * @param _groupId 需要升级的人员库ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取需要升级至的算法模型版本。默认为最新版本。不可逆向升级
                     * @return FaceModelVersion 需要升级至的算法模型版本。默认为最新版本。不可逆向升级
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置需要升级至的算法模型版本。默认为最新版本。不可逆向升级
                     * @param _faceModelVersion 需要升级至的算法模型版本。默认为最新版本。不可逆向升级
                     * 
                     */
                    void SetFaceModelVersion(const std::string& _faceModelVersion);

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * 需要升级的人员库ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 需要升级至的算法模型版本。默认为最新版本。不可逆向升级
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_UPGRADEGROUPFACEMODELVERSIONREQUEST_H_
