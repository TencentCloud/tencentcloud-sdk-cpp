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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceLabel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 安卓实例信息
                */
                class AndroidInstance : public AbstractModel
                {
                public:
                    AndroidInstance();
                    ~AndroidInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID
                     * @return AndroidInstanceId 实例 ID
                     * 
                     */
                    std::string GetAndroidInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _androidInstanceId 实例 ID
                     * 
                     */
                    void SetAndroidInstanceId(const std::string& _androidInstanceId);

                    /**
                     * 判断参数 AndroidInstanceId 是否已赋值
                     * @return AndroidInstanceId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例所在区域
                     * @return AndroidInstanceRegion 实例所在区域
                     * 
                     */
                    std::string GetAndroidInstanceRegion() const;

                    /**
                     * 设置实例所在区域
                     * @param _androidInstanceRegion 实例所在区域
                     * 
                     */
                    void SetAndroidInstanceRegion(const std::string& _androidInstanceRegion);

                    /**
                     * 判断参数 AndroidInstanceRegion 是否已赋值
                     * @return AndroidInstanceRegion 是否已赋值
                     * 
                     */
                    bool AndroidInstanceRegionHasBeenSet() const;

                    /**
                     * 获取实例可用区
                     * @return AndroidInstanceZone 实例可用区
                     * 
                     */
                    std::string GetAndroidInstanceZone() const;

                    /**
                     * 设置实例可用区
                     * @param _androidInstanceZone 实例可用区
                     * 
                     */
                    void SetAndroidInstanceZone(const std::string& _androidInstanceZone);

                    /**
                     * 判断参数 AndroidInstanceZone 是否已赋值
                     * @return AndroidInstanceZone 是否已赋值
                     * 
                     */
                    bool AndroidInstanceZoneHasBeenSet() const;

                    /**
                     * 获取实例状态：INITIALIZING，NORMAL，PROCESSING
                     * @return State 实例状态：INITIALIZING，NORMAL，PROCESSING
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置实例状态：INITIALIZING，NORMAL，PROCESSING
                     * @param _state 实例状态：INITIALIZING，NORMAL，PROCESSING
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
                     * 获取实例规格
                     * @return AndroidInstanceType 实例规格
                     * 
                     */
                    std::string GetAndroidInstanceType() const;

                    /**
                     * 设置实例规格
                     * @param _androidInstanceType 实例规格
                     * 
                     */
                    void SetAndroidInstanceType(const std::string& _androidInstanceType);

                    /**
                     * 判断参数 AndroidInstanceType 是否已赋值
                     * @return AndroidInstanceType 是否已赋值
                     * 
                     */
                    bool AndroidInstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例镜像 ID
                     * @return AndroidInstanceImageId 实例镜像 ID
                     * 
                     */
                    std::string GetAndroidInstanceImageId() const;

                    /**
                     * 设置实例镜像 ID
                     * @param _androidInstanceImageId 实例镜像 ID
                     * 
                     */
                    void SetAndroidInstanceImageId(const std::string& _androidInstanceImageId);

                    /**
                     * 判断参数 AndroidInstanceImageId 是否已赋值
                     * @return AndroidInstanceImageId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageIdHasBeenSet() const;

                    /**
                     * 获取分辨率宽度
                     * @return Width 分辨率宽度
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置分辨率宽度
                     * @param _width 分辨率宽度
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取分辨率高度
                     * @return Height 分辨率高度
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置分辨率高度
                     * @param _height 分辨率高度
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取宿主机 ID
                     * @return HostSerialNumber 宿主机 ID
                     * 
                     */
                    std::string GetHostSerialNumber() const;

                    /**
                     * 设置宿主机 ID
                     * @param _hostSerialNumber 宿主机 ID
                     * 
                     */
                    void SetHostSerialNumber(const std::string& _hostSerialNumber);

                    /**
                     * 判断参数 HostSerialNumber 是否已赋值
                     * @return HostSerialNumber 是否已赋值
                     * 
                     */
                    bool HostSerialNumberHasBeenSet() const;

                    /**
                     * 获取分组 ID
                     * @return AndroidInstanceGroupId 分组 ID
                     * 
                     */
                    std::string GetAndroidInstanceGroupId() const;

                    /**
                     * 设置分组 ID
                     * @param _androidInstanceGroupId 分组 ID
                     * 
                     */
                    void SetAndroidInstanceGroupId(const std::string& _androidInstanceGroupId);

                    /**
                     * 判断参数 AndroidInstanceGroupId 是否已赋值
                     * @return AndroidInstanceGroupId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return AndroidInstanceLabels 标签列表
                     * 
                     */
                    std::vector<AndroidInstanceLabel> GetAndroidInstanceLabels() const;

                    /**
                     * 设置标签列表
                     * @param _androidInstanceLabels 标签列表
                     * 
                     */
                    void SetAndroidInstanceLabels(const std::vector<AndroidInstanceLabel>& _androidInstanceLabels);

                    /**
                     * 判断参数 AndroidInstanceLabels 是否已赋值
                     * @return AndroidInstanceLabels 是否已赋值
                     * 
                     */
                    bool AndroidInstanceLabelsHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取内网 IP
                     * @return PrivateIP 内网 IP
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置内网 IP
                     * @param _privateIP 内网 IP
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取机箱 ID
                     * @return HostServerSerialNumber 机箱 ID
                     * 
                     */
                    std::string GetHostServerSerialNumber() const;

                    /**
                     * 设置机箱 ID
                     * @param _hostServerSerialNumber 机箱 ID
                     * 
                     */
                    void SetHostServerSerialNumber(const std::string& _hostServerSerialNumber);

                    /**
                     * 判断参数 HostServerSerialNumber 是否已赋值
                     * @return HostServerSerialNumber 是否已赋值
                     * 
                     */
                    bool HostServerSerialNumberHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_androidInstanceId;
                    bool m_androidInstanceIdHasBeenSet;

                    /**
                     * 实例所在区域
                     */
                    std::string m_androidInstanceRegion;
                    bool m_androidInstanceRegionHasBeenSet;

                    /**
                     * 实例可用区
                     */
                    std::string m_androidInstanceZone;
                    bool m_androidInstanceZoneHasBeenSet;

                    /**
                     * 实例状态：INITIALIZING，NORMAL，PROCESSING
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 实例规格
                     */
                    std::string m_androidInstanceType;
                    bool m_androidInstanceTypeHasBeenSet;

                    /**
                     * 实例镜像 ID
                     */
                    std::string m_androidInstanceImageId;
                    bool m_androidInstanceImageIdHasBeenSet;

                    /**
                     * 分辨率宽度
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 分辨率高度
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 宿主机 ID
                     */
                    std::string m_hostSerialNumber;
                    bool m_hostSerialNumberHasBeenSet;

                    /**
                     * 分组 ID
                     */
                    std::string m_androidInstanceGroupId;
                    bool m_androidInstanceGroupIdHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<AndroidInstanceLabel> m_androidInstanceLabels;
                    bool m_androidInstanceLabelsHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 内网 IP
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 机箱 ID
                     */
                    std::string m_hostServerSerialNumber;
                    bool m_hostServerSerialNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCE_H_
