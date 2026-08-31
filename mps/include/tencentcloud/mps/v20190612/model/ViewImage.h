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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIEWIMAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIEWIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 多视角图生 3D 场景下，MultiViewImages 数组中的单个视角。
                */
                class ViewImage : public AbstractModel
                {
                public:
                    ViewImage();
                    ~ViewImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视角类型</p><p>枚举值：</p><ul><li>front： 正视图 （必填）</li><li>back： 背视图</li><li>left： 左视图</li><li>right： 右视图</li><li>top： 顶视图</li><li>bottom： 底视图</li><li>left_front： 左前 45°</li><li>right_front： 右前 45°</li></ul><p>MultiViewImages 数组长度 ≥ 2 ; 必须包含 front 视角;  同一 ViewType 不允许重复; 每项必须提供 ViewImageUrl</p>
                     * @return ViewType <p>视角类型</p><p>枚举值：</p><ul><li>front： 正视图 （必填）</li><li>back： 背视图</li><li>left： 左视图</li><li>right： 右视图</li><li>top： 顶视图</li><li>bottom： 底视图</li><li>left_front： 左前 45°</li><li>right_front： 右前 45°</li></ul><p>MultiViewImages 数组长度 ≥ 2 ; 必须包含 front 视角;  同一 ViewType 不允许重复; 每项必须提供 ViewImageUrl</p>
                     * 
                     */
                    std::string GetViewType() const;

                    /**
                     * 设置<p>视角类型</p><p>枚举值：</p><ul><li>front： 正视图 （必填）</li><li>back： 背视图</li><li>left： 左视图</li><li>right： 右视图</li><li>top： 顶视图</li><li>bottom： 底视图</li><li>left_front： 左前 45°</li><li>right_front： 右前 45°</li></ul><p>MultiViewImages 数组长度 ≥ 2 ; 必须包含 front 视角;  同一 ViewType 不允许重复; 每项必须提供 ViewImageUrl</p>
                     * @param _viewType <p>视角类型</p><p>枚举值：</p><ul><li>front： 正视图 （必填）</li><li>back： 背视图</li><li>left： 左视图</li><li>right： 右视图</li><li>top： 顶视图</li><li>bottom： 底视图</li><li>left_front： 左前 45°</li><li>right_front： 右前 45°</li></ul><p>MultiViewImages 数组长度 ≥ 2 ; 必须包含 front 视角;  同一 ViewType 不允许重复; 每项必须提供 ViewImageUrl</p>
                     * 
                     */
                    void SetViewType(const std::string& _viewType);

                    /**
                     * 判断参数 ViewType 是否已赋值
                     * @return ViewType 是否已赋值
                     * 
                     */
                    bool ViewTypeHasBeenSet() const;

                    /**
                     * 获取<p>图片 URL（http / https）</p>
                     * @return ViewImageUrl <p>图片 URL（http / https）</p>
                     * 
                     */
                    std::string GetViewImageUrl() const;

                    /**
                     * 设置<p>图片 URL（http / https）</p>
                     * @param _viewImageUrl <p>图片 URL（http / https）</p>
                     * 
                     */
                    void SetViewImageUrl(const std::string& _viewImageUrl);

                    /**
                     * 判断参数 ViewImageUrl 是否已赋值
                     * @return ViewImageUrl 是否已赋值
                     * 
                     */
                    bool ViewImageUrlHasBeenSet() const;

                private:

                    /**
                     * <p>视角类型</p><p>枚举值：</p><ul><li>front： 正视图 （必填）</li><li>back： 背视图</li><li>left： 左视图</li><li>right： 右视图</li><li>top： 顶视图</li><li>bottom： 底视图</li><li>left_front： 左前 45°</li><li>right_front： 右前 45°</li></ul><p>MultiViewImages 数组长度 ≥ 2 ; 必须包含 front 视角;  同一 ViewType 不允许重复; 每项必须提供 ViewImageUrl</p>
                     */
                    std::string m_viewType;
                    bool m_viewTypeHasBeenSet;

                    /**
                     * <p>图片 URL（http / https）</p>
                     */
                    std::string m_viewImageUrl;
                    bool m_viewImageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIEWIMAGE_H_
