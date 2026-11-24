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
                     * 获取<p>实例 ID</p>
                     * @return AndroidInstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetAndroidInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _androidInstanceId <p>实例 ID</p>
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
                     * 获取<p>实例所在区域</p>
                     * @return AndroidInstanceRegion <p>实例所在区域</p>
                     * 
                     */
                    std::string GetAndroidInstanceRegion() const;

                    /**
                     * 设置<p>实例所在区域</p>
                     * @param _androidInstanceRegion <p>实例所在区域</p>
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
                     * 获取<p>实例可用区</p>
                     * @return AndroidInstanceZone <p>实例可用区</p>
                     * 
                     */
                    std::string GetAndroidInstanceZone() const;

                    /**
                     * 设置<p>实例可用区</p>
                     * @param _androidInstanceZone <p>实例可用区</p>
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
                     * 获取<p>实例状态：INITIALIZING，NORMAL，PROCESSING</p>
                     * @return State <p>实例状态：INITIALIZING，NORMAL，PROCESSING</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>实例状态：INITIALIZING，NORMAL，PROCESSING</p>
                     * @param _state <p>实例状态：INITIALIZING，NORMAL，PROCESSING</p>
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
                     * 获取<p>实例规格</p>
                     * @return AndroidInstanceType <p>实例规格</p>
                     * 
                     */
                    std::string GetAndroidInstanceType() const;

                    /**
                     * 设置<p>实例规格</p>
                     * @param _androidInstanceType <p>实例规格</p>
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
                     * 获取<p>实例镜像 ID</p>
                     * @return AndroidInstanceImageId <p>实例镜像 ID</p>
                     * 
                     */
                    std::string GetAndroidInstanceImageId() const;

                    /**
                     * 设置<p>实例镜像 ID</p>
                     * @param _androidInstanceImageId <p>实例镜像 ID</p>
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
                     * 获取<p>分辨率宽度</p>
                     * @return Width <p>分辨率宽度</p>
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置<p>分辨率宽度</p>
                     * @param _width <p>分辨率宽度</p>
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
                     * 获取<p>分辨率高度</p>
                     * @return Height <p>分辨率高度</p>
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置<p>分辨率高度</p>
                     * @param _height <p>分辨率高度</p>
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
                     * 获取<p>每英寸像素点。</p>
                     * @return DPI <p>每英寸像素点。</p>
                     * 
                     */
                    uint64_t GetDPI() const;

                    /**
                     * 设置<p>每英寸像素点。</p>
                     * @param _dPI <p>每英寸像素点。</p>
                     * 
                     */
                    void SetDPI(const uint64_t& _dPI);

                    /**
                     * 判断参数 DPI 是否已赋值
                     * @return DPI 是否已赋值
                     * 
                     */
                    bool DPIHasBeenSet() const;

                    /**
                     * 获取<p>帧率</p>
                     * @return FPS <p>帧率</p>
                     * 
                     */
                    uint64_t GetFPS() const;

                    /**
                     * 设置<p>帧率</p>
                     * @param _fPS <p>帧率</p>
                     * 
                     */
                    void SetFPS(const uint64_t& _fPS);

                    /**
                     * 判断参数 FPS 是否已赋值
                     * @return FPS 是否已赋值
                     * 
                     */
                    bool FPSHasBeenSet() const;

                    /**
                     * 获取<p>宿主机 ID</p>
                     * @return HostSerialNumber <p>宿主机 ID</p>
                     * 
                     */
                    std::string GetHostSerialNumber() const;

                    /**
                     * 设置<p>宿主机 ID</p>
                     * @param _hostSerialNumber <p>宿主机 ID</p>
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
                     * 获取<p>分组 ID</p>
                     * @return AndroidInstanceGroupId <p>分组 ID</p>
                     * 
                     */
                    std::string GetAndroidInstanceGroupId() const;

                    /**
                     * 设置<p>分组 ID</p>
                     * @param _androidInstanceGroupId <p>分组 ID</p>
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
                     * 获取<p>标签列表</p>
                     * @return AndroidInstanceLabels <p>标签列表</p>
                     * 
                     */
                    std::vector<AndroidInstanceLabel> GetAndroidInstanceLabels() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _androidInstanceLabels <p>标签列表</p>
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
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>用户ID</p>
                     * @return UserId <p>用户ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户ID</p>
                     * @param _userId <p>用户ID</p>
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
                     * 获取<p>内网 IP</p>
                     * @return PrivateIP <p>内网 IP</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>内网 IP</p>
                     * @param _privateIP <p>内网 IP</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>机箱 ID</p>
                     * @return HostServerSerialNumber <p>机箱 ID</p>
                     * 
                     */
                    std::string GetHostServerSerialNumber() const;

                    /**
                     * 设置<p>机箱 ID</p>
                     * @param _hostServerSerialNumber <p>机箱 ID</p>
                     * 
                     */
                    void SetHostServerSerialNumber(const std::string& _hostServerSerialNumber);

                    /**
                     * 判断参数 HostServerSerialNumber 是否已赋值
                     * @return HostServerSerialNumber 是否已赋值
                     * 
                     */
                    bool HostServerSerialNumberHasBeenSet() const;

                    /**
                     * 获取<p>服务状态。<br>IDLE：未连接<br>ESTABLISHED：连接中</p>
                     * @return ServiceStatus <p>服务状态。<br>IDLE：未连接<br>ESTABLISHED：连接中</p>
                     * 
                     */
                    std::string GetServiceStatus() const;

                    /**
                     * 设置<p>服务状态。<br>IDLE：未连接<br>ESTABLISHED：连接中</p>
                     * @param _serviceStatus <p>服务状态。<br>IDLE：未连接<br>ESTABLISHED：连接中</p>
                     * 
                     */
                    void SetServiceStatus(const std::string& _serviceStatus);

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                    /**
                     * 获取<p>安卓实例型号。<br>YS1：默认值，基础型云手机<br>GC0、GC1、GC2：三种性能型云手机</p>
                     * @return AndroidInstanceModel <p>安卓实例型号。<br>YS1：默认值，基础型云手机<br>GC0、GC1、GC2：三种性能型云手机</p>
                     * 
                     */
                    std::string GetAndroidInstanceModel() const;

                    /**
                     * 设置<p>安卓实例型号。<br>YS1：默认值，基础型云手机<br>GC0、GC1、GC2：三种性能型云手机</p>
                     * @param _androidInstanceModel <p>安卓实例型号。<br>YS1：默认值，基础型云手机<br>GC0、GC1、GC2：三种性能型云手机</p>
                     * 
                     */
                    void SetAndroidInstanceModel(const std::string& _androidInstanceModel);

                    /**
                     * 判断参数 AndroidInstanceModel 是否已赋值
                     * @return AndroidInstanceModel 是否已赋值
                     * 
                     */
                    bool AndroidInstanceModelHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_androidInstanceId;
                    bool m_androidInstanceIdHasBeenSet;

                    /**
                     * <p>实例所在区域</p>
                     */
                    std::string m_androidInstanceRegion;
                    bool m_androidInstanceRegionHasBeenSet;

                    /**
                     * <p>实例可用区</p>
                     */
                    std::string m_androidInstanceZone;
                    bool m_androidInstanceZoneHasBeenSet;

                    /**
                     * <p>实例状态：INITIALIZING，NORMAL，PROCESSING</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>实例规格</p>
                     */
                    std::string m_androidInstanceType;
                    bool m_androidInstanceTypeHasBeenSet;

                    /**
                     * <p>实例镜像 ID</p>
                     */
                    std::string m_androidInstanceImageId;
                    bool m_androidInstanceImageIdHasBeenSet;

                    /**
                     * <p>分辨率宽度</p>
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>分辨率高度</p>
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>每英寸像素点。</p>
                     */
                    uint64_t m_dPI;
                    bool m_dPIHasBeenSet;

                    /**
                     * <p>帧率</p>
                     */
                    uint64_t m_fPS;
                    bool m_fPSHasBeenSet;

                    /**
                     * <p>宿主机 ID</p>
                     */
                    std::string m_hostSerialNumber;
                    bool m_hostSerialNumberHasBeenSet;

                    /**
                     * <p>分组 ID</p>
                     */
                    std::string m_androidInstanceGroupId;
                    bool m_androidInstanceGroupIdHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<AndroidInstanceLabel> m_androidInstanceLabels;
                    bool m_androidInstanceLabelsHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用户ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>内网 IP</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>机箱 ID</p>
                     */
                    std::string m_hostServerSerialNumber;
                    bool m_hostServerSerialNumberHasBeenSet;

                    /**
                     * <p>服务状态。<br>IDLE：未连接<br>ESTABLISHED：连接中</p>
                     */
                    std::string m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                    /**
                     * <p>安卓实例型号。<br>YS1：默认值，基础型云手机<br>GC0、GC1、GC2：三种性能型云手机</p>
                     */
                    std::string m_androidInstanceModel;
                    bool m_androidInstanceModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCE_H_
