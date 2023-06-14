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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_POLICYINFO_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_POLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 权限信息
                */
                class PolicyInfo : public AbstractModel
                {
                public:
                    PolicyInfo();
                    ~PolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取远端设备ID
                     * @return RemoteDeviceId 远端设备ID
                     * 
                     */
                    std::string GetRemoteDeviceId() const;

                    /**
                     * 设置远端设备ID
                     * @param _remoteDeviceId 远端设备ID
                     * 
                     */
                    void SetRemoteDeviceId(const std::string& _remoteDeviceId);

                    /**
                     * 判断参数 RemoteDeviceId 是否已赋值
                     * @return RemoteDeviceId 是否已赋值
                     * 
                     */
                    bool RemoteDeviceIdHasBeenSet() const;

                    /**
                     * 获取关联的现场设备ID
                     * @return FieldDeviceIds 关联的现场设备ID
                     * 
                     */
                    std::vector<std::string> GetFieldDeviceIds() const;

                    /**
                     * 设置关联的现场设备ID
                     * @param _fieldDeviceIds 关联的现场设备ID
                     * 
                     */
                    void SetFieldDeviceIds(const std::vector<std::string>& _fieldDeviceIds);

                    /**
                     * 判断参数 FieldDeviceIds 是否已赋值
                     * @return FieldDeviceIds 是否已赋值
                     * 
                     */
                    bool FieldDeviceIdsHasBeenSet() const;

                    /**
                     * 获取最近添加时间
                     * @return ModifyTime 最近添加时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最近添加时间
                     * @param _modifyTime 最近添加时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 远端设备ID
                     */
                    std::string m_remoteDeviceId;
                    bool m_remoteDeviceIdHasBeenSet;

                    /**
                     * 关联的现场设备ID
                     */
                    std::vector<std::string> m_fieldDeviceIds;
                    bool m_fieldDeviceIdsHasBeenSet;

                    /**
                     * 最近添加时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_POLICYINFO_H_
