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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFORESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetFaceIdRiskInfo返回参数结构体
                */
                class GetFaceIdRiskInfoResponse : public AbstractModel
                {
                public:
                    GetFaceIdRiskInfoResponse();
                    ~GetFaceIdRiskInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取描述当前请求所在设备的风险标签
- 详情如下：
01-设备疑似被Root/设备疑似越狱。
02-设备疑似被注入。
03-设备疑似为模拟器。
04-设备疑似存在风险操作。
05-摄像头疑似被劫持。
06-疑似黑产设备。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceInfoTag 描述当前请求所在设备的风险标签
- 详情如下：
01-设备疑似被Root/设备疑似越狱。
02-设备疑似被注入。
03-设备疑似为模拟器。
04-设备疑似存在风险操作。
05-摄像头疑似被劫持。
06-疑似黑产设备。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceInfoTag() const;

                    /**
                     * 判断参数 DeviceInfoTag 是否已赋值
                     * @return DeviceInfoTag 是否已赋值
                     * 
                     */
                    bool DeviceInfoTagHasBeenSet() const;

                    /**
                     * 获取描述当前请求所在设备的风险等级，共4级。
- 详情如下：
 1 - 低风险。
 2 - 中风险。
 3 - 高风险。
 4 - 攻击。 
-1表示未获取到风险等级。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceInfoLevel 描述当前请求所在设备的风险等级，共4级。
- 详情如下：
 1 - 低风险。
 2 - 中风险。
 3 - 高风险。
 4 - 攻击。 
-1表示未获取到风险等级。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeviceInfoLevel() const;

                    /**
                     * 判断参数 DeviceInfoLevel 是否已赋值
                     * @return DeviceInfoLevel 是否已赋值
                     * 
                     */
                    bool DeviceInfoLevelHasBeenSet() const;

                    /**
                     * 获取设备id标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenId 设备id标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取描述当前请求所在设备的相机指纹风险等级，共4级。
- 详情如下：
 1 - 低风险。
 2 - 中风险。
 3 - 高风险。
 4 - 攻击。
 -1表示未获取到风险等级。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CameraInfoLevel 描述当前请求所在设备的相机指纹风险等级，共4级。
- 详情如下：
 1 - 低风险。
 2 - 中风险。
 3 - 高风险。
 4 - 攻击。
 -1表示未获取到风险等级。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCameraInfoLevel() const;

                    /**
                     * 判断参数 CameraInfoLevel 是否已赋值
                     * @return CameraInfoLevel 是否已赋值
                     * 
                     */
                    bool CameraInfoLevelHasBeenSet() const;

                    /**
                     * 获取描述当前请求所在设备的相机指纹风险标签。

- 详情如下：
 01-设备疑似被Root/设备疑似越狱。
 02-设备疑似被注入。
 03-设备疑似为模拟器。
 04-设备疑似存在风险操作。
 05-摄像头疑似被劫持。
 06-疑似黑产设备。
 空表示没有相机指纹风险。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CameraInfoTag 描述当前请求所在设备的相机指纹风险标签。

- 详情如下：
 01-设备疑似被Root/设备疑似越狱。
 02-设备疑似被注入。
 03-设备疑似为模拟器。
 04-设备疑似存在风险操作。
 05-摄像头疑似被劫持。
 06-疑似黑产设备。
 空表示没有相机指纹风险。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCameraInfoTag() const;

                    /**
                     * 判断参数 CameraInfoTag 是否已赋值
                     * @return CameraInfoTag 是否已赋值
                     * 
                     */
                    bool CameraInfoTagHasBeenSet() const;

                    /**
                     * 获取获取token时透传的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 获取token时透传的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * 描述当前请求所在设备的风险标签
- 详情如下：
01-设备疑似被Root/设备疑似越狱。
02-设备疑似被注入。
03-设备疑似为模拟器。
04-设备疑似存在风险操作。
05-摄像头疑似被劫持。
06-疑似黑产设备。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceInfoTag;
                    bool m_deviceInfoTagHasBeenSet;

                    /**
                     * 描述当前请求所在设备的风险等级，共4级。
- 详情如下：
 1 - 低风险。
 2 - 中风险。
 3 - 高风险。
 4 - 攻击。 
-1表示未获取到风险等级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deviceInfoLevel;
                    bool m_deviceInfoLevelHasBeenSet;

                    /**
                     * 设备id标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 描述当前请求所在设备的相机指纹风险等级，共4级。
- 详情如下：
 1 - 低风险。
 2 - 中风险。
 3 - 高风险。
 4 - 攻击。
 -1表示未获取到风险等级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cameraInfoLevel;
                    bool m_cameraInfoLevelHasBeenSet;

                    /**
                     * 描述当前请求所在设备的相机指纹风险标签。

- 详情如下：
 01-设备疑似被Root/设备疑似越狱。
 02-设备疑似被注入。
 03-设备疑似为模拟器。
 04-设备疑似存在风险操作。
 05-摄像头疑似被劫持。
 06-疑似黑产设备。
 空表示没有相机指纹风险。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cameraInfoTag;
                    bool m_cameraInfoTagHasBeenSet;

                    /**
                     * 获取token时透传的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFORESPONSE_H_
