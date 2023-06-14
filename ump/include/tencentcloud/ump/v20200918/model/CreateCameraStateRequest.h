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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERASTATEREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERASTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/CameraState.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * CreateCameraState请求参数结构体
                */
                class CreateCameraStateRequest : public AbstractModel
                {
                public:
                    CreateCameraStateRequest();
                    ~CreateCameraStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团编码
                     * @return GroupCode 集团编码
                     * 
                     */
                    std::string GetGroupCode() const;

                    /**
                     * 设置集团编码
                     * @param _groupCode 集团编码
                     * 
                     */
                    void SetGroupCode(const std::string& _groupCode);

                    /**
                     * 判断参数 GroupCode 是否已赋值
                     * @return GroupCode 是否已赋值
                     * 
                     */
                    bool GroupCodeHasBeenSet() const;

                    /**
                     * 获取广场ID
                     * @return MallId 广场ID
                     * 
                     */
                    uint64_t GetMallId() const;

                    /**
                     * 设置广场ID
                     * @param _mallId 广场ID
                     * 
                     */
                    void SetMallId(const uint64_t& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取场内所有相机的状态值
                     * @return CameraStates 场内所有相机的状态值
                     * 
                     */
                    std::vector<CameraState> GetCameraStates() const;

                    /**
                     * 设置场内所有相机的状态值
                     * @param _cameraStates 场内所有相机的状态值
                     * 
                     */
                    void SetCameraStates(const std::vector<CameraState>& _cameraStates);

                    /**
                     * 判断参数 CameraStates 是否已赋值
                     * @return CameraStates 是否已赋值
                     * 
                     */
                    bool CameraStatesHasBeenSet() const;

                private:

                    /**
                     * 集团编码
                     */
                    std::string m_groupCode;
                    bool m_groupCodeHasBeenSet;

                    /**
                     * 广场ID
                     */
                    uint64_t m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 场内所有相机的状态值
                     */
                    std::vector<CameraState> m_cameraStates;
                    bool m_cameraStatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERASTATEREQUEST_H_
