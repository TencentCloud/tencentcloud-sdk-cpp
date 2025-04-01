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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDAPP_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDAPP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidAppVersionInfo.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 安卓应用
                */
                class AndroidApp : public AbstractModel
                {
                public:
                    AndroidApp();
                    ~AndroidApp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安卓应用 Id
                     * @return AndroidAppId 安卓应用 Id
                     * 
                     */
                    std::string GetAndroidAppId() const;

                    /**
                     * 设置安卓应用 Id
                     * @param _androidAppId 安卓应用 Id
                     * 
                     */
                    void SetAndroidAppId(const std::string& _androidAppId);

                    /**
                     * 判断参数 AndroidAppId 是否已赋值
                     * @return AndroidAppId 是否已赋值
                     * 
                     */
                    bool AndroidAppIdHasBeenSet() const;

                    /**
                     * 获取安卓应用名称
                     * @return Name 安卓应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置安卓应用名称
                     * @param _name 安卓应用名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取安卓应用状态（上架、下架）
                     * @return State 安卓应用状态（上架、下架）
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置安卓应用状态（上架、下架）
                     * @param _state 安卓应用状态（上架、下架）
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取安卓应用版本列表
                     * @return AndroidAppVersionInfo 安卓应用版本列表
                     * 
                     */
                    std::vector<AndroidAppVersionInfo> GetAndroidAppVersionInfo() const;

                    /**
                     * 设置安卓应用版本列表
                     * @param _androidAppVersionInfo 安卓应用版本列表
                     * 
                     */
                    void SetAndroidAppVersionInfo(const std::vector<AndroidAppVersionInfo>& _androidAppVersionInfo);

                    /**
                     * 判断参数 AndroidAppVersionInfo 是否已赋值
                     * @return AndroidAppVersionInfo 是否已赋值
                     * 
                     */
                    bool AndroidAppVersionInfoHasBeenSet() const;

                    /**
                     * 获取安卓应用创建时间
                     * @return CreateTime 安卓应用创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置安卓应用创建时间
                     * @param _createTime 安卓应用创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用户 Id
                     * @return UserId 用户 Id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 Id
                     * @param _userId 用户 Id
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 安卓应用 Id
                     */
                    std::string m_androidAppId;
                    bool m_androidAppIdHasBeenSet;

                    /**
                     * 安卓应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 安卓应用状态（上架、下架）
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 安卓应用版本列表
                     */
                    std::vector<AndroidAppVersionInfo> m_androidAppVersionInfo;
                    bool m_androidAppVersionInfoHasBeenSet;

                    /**
                     * 安卓应用创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户 Id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDAPP_H_
