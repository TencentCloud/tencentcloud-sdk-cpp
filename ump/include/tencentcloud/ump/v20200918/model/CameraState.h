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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CAMERASTATE_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CAMERASTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 用于场内上报当前相机的状态
                */
                class CameraState : public AbstractModel
                {
                public:
                    CameraState();
                    ~CameraState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取相机ID
                     * @return CameraId 相机ID
                     * 
                     */
                    uint64_t GetCameraId() const;

                    /**
                     * 设置相机ID
                     * @param _cameraId 相机ID
                     * 
                     */
                    void SetCameraId(const uint64_t& _cameraId);

                    /**
                     * 判断参数 CameraId 是否已赋值
                     * @return CameraId 是否已赋值
                     * 
                     */
                    bool CameraIdHasBeenSet() const;

                    /**
                     * 获取相机状态:
10: 初始化
11: 未知状态
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 状态正常
                     * @return State 相机状态:
10: 初始化
11: 未知状态
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 状态正常
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置相机状态:
10: 初始化
11: 未知状态
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 状态正常
                     * @param _state 相机状态:
10: 初始化
11: 未知状态
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 状态正常
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 相机ID
                     */
                    uint64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * 相机状态:
10: 初始化
11: 未知状态
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 状态正常
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CAMERASTATE_H_
