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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESRESOLUTIONREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESRESOLUTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * ModifyAndroidInstancesResolution请求参数结构体
                */
                class ModifyAndroidInstancesResolutionRequest : public AbstractModel
                {
                public:
                    ModifyAndroidInstancesResolutionRequest();
                    ~ModifyAndroidInstancesResolutionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例 ID 列表
                     * @return AndroidInstanceIds 安卓实例 ID 列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置安卓实例 ID 列表
                     * @param _androidInstanceIds 安卓实例 ID 列表
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                    /**
                     * 获取分辨率宽度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1080
实例类型为双开（A2） 及以上：建议设置为 720
                     * @return Width 分辨率宽度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1080
实例类型为双开（A2） 及以上：建议设置为 720
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置分辨率宽度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1080
实例类型为双开（A2） 及以上：建议设置为 720
                     * @param _width 分辨率宽度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1080
实例类型为双开（A2） 及以上：建议设置为 720
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
                     * 获取分辨率高度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1920
实例类型为双开（A2） 及以上：建议设置为 1280
                     * @return Height 分辨率高度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1920
实例类型为双开（A2） 及以上：建议设置为 1280
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置分辨率高度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1920
实例类型为双开（A2） 及以上：建议设置为 1280
                     * @param _height 分辨率高度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1920
实例类型为双开（A2） 及以上：建议设置为 1280
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
                     * 获取每英寸像素点。
分辨率为 720x1280：建议配置为 320
分辨率为  1080x1920：建议配置为 480
                     * @return DPI 每英寸像素点。
分辨率为 720x1280：建议配置为 320
分辨率为  1080x1920：建议配置为 480
                     * 
                     */
                    uint64_t GetDPI() const;

                    /**
                     * 设置每英寸像素点。
分辨率为 720x1280：建议配置为 320
分辨率为  1080x1920：建议配置为 480
                     * @param _dPI 每英寸像素点。
分辨率为 720x1280：建议配置为 320
分辨率为  1080x1920：建议配置为 480
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
                     * 获取帧率。ResolutionType 为 PHYSICAL 时才会修改帧率。另外建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 60
实例类型为双开（A2） 及以上：建议设置为 30
                     * @return FPS 帧率。ResolutionType 为 PHYSICAL 时才会修改帧率。另外建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 60
实例类型为双开（A2） 及以上：建议设置为 30
                     * 
                     */
                    uint64_t GetFPS() const;

                    /**
                     * 设置帧率。ResolutionType 为 PHYSICAL 时才会修改帧率。另外建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 60
实例类型为双开（A2） 及以上：建议设置为 30
                     * @param _fPS 帧率。ResolutionType 为 PHYSICAL 时才会修改帧率。另外建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 60
实例类型为双开（A2） 及以上：建议设置为 30
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
                     * 获取修改分辨率类型。修改物理分辨率，需要重启才能生效。
OVERRIDE：默认值，修改覆盖（显示）分辨率
PHYSICAL：修改物理分辨率
                     * @return ResolutionType 修改分辨率类型。修改物理分辨率，需要重启才能生效。
OVERRIDE：默认值，修改覆盖（显示）分辨率
PHYSICAL：修改物理分辨率
                     * 
                     */
                    std::string GetResolutionType() const;

                    /**
                     * 设置修改分辨率类型。修改物理分辨率，需要重启才能生效。
OVERRIDE：默认值，修改覆盖（显示）分辨率
PHYSICAL：修改物理分辨率
                     * @param _resolutionType 修改分辨率类型。修改物理分辨率，需要重启才能生效。
OVERRIDE：默认值，修改覆盖（显示）分辨率
PHYSICAL：修改物理分辨率
                     * 
                     */
                    void SetResolutionType(const std::string& _resolutionType);

                    /**
                     * 判断参数 ResolutionType 是否已赋值
                     * @return ResolutionType 是否已赋值
                     * 
                     */
                    bool ResolutionTypeHasBeenSet() const;

                private:

                    /**
                     * 安卓实例 ID 列表
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 分辨率宽度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1080
实例类型为双开（A2） 及以上：建议设置为 720
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 分辨率高度。建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 1920
实例类型为双开（A2） 及以上：建议设置为 1280
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 每英寸像素点。
分辨率为 720x1280：建议配置为 320
分辨率为  1080x1920：建议配置为 480
                     */
                    uint64_t m_dPI;
                    bool m_dPIHasBeenSet;

                    /**
                     * 帧率。ResolutionType 为 PHYSICAL 时才会修改帧率。另外建议按照以下数值设置，避免出现性能不足问题：
实例类型为单开（A1）：建议设置为 60
实例类型为双开（A2） 及以上：建议设置为 30
                     */
                    uint64_t m_fPS;
                    bool m_fPSHasBeenSet;

                    /**
                     * 修改分辨率类型。修改物理分辨率，需要重启才能生效。
OVERRIDE：默认值，修改覆盖（显示）分辨率
PHYSICAL：修改物理分辨率
                     */
                    std::string m_resolutionType;
                    bool m_resolutionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESRESOLUTIONREQUEST_H_
