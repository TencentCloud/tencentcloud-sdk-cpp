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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCERESOLUTIONREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCERESOLUTIONREQUEST_H_

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
                * ModifyAndroidInstanceResolution请求参数结构体
                */
                class ModifyAndroidInstanceResolutionRequest : public AbstractModel
                {
                public:
                    ModifyAndroidInstanceResolutionRequest();
                    ~ModifyAndroidInstanceResolutionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例 ID
                     * @return AndroidInstanceId 安卓实例 ID
                     * 
                     */
                    std::string GetAndroidInstanceId() const;

                    /**
                     * 设置安卓实例 ID
                     * @param _androidInstanceId 安卓实例 ID
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
                     * 获取每英寸像素点。如果不填，系统将会计算一个合理的数值。修改 DPI 可能会导致 App 异常退出，请谨慎使用！
                     * @return DPI 每英寸像素点。如果不填，系统将会计算一个合理的数值。修改 DPI 可能会导致 App 异常退出，请谨慎使用！
                     * 
                     */
                    uint64_t GetDPI() const;

                    /**
                     * 设置每英寸像素点。如果不填，系统将会计算一个合理的数值。修改 DPI 可能会导致 App 异常退出，请谨慎使用！
                     * @param _dPI 每英寸像素点。如果不填，系统将会计算一个合理的数值。修改 DPI 可能会导致 App 异常退出，请谨慎使用！
                     * 
                     */
                    void SetDPI(const uint64_t& _dPI);

                    /**
                     * 判断参数 DPI 是否已赋值
                     * @return DPI 是否已赋值
                     * 
                     */
                    bool DPIHasBeenSet() const;

                private:

                    /**
                     * 安卓实例 ID
                     */
                    std::string m_androidInstanceId;
                    bool m_androidInstanceIdHasBeenSet;

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
                     * 每英寸像素点。如果不填，系统将会计算一个合理的数值。修改 DPI 可能会导致 App 异常退出，请谨慎使用！
                     */
                    uint64_t m_dPI;
                    bool m_dPIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCERESOLUTIONREQUEST_H_
