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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CUSTOMLAYOUT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CUSTOMLAYOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Canvas.h>
#include <tencentcloud/tiw/v20190919/model/StreamLayout.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 自定义混流布局参数
                */
                class CustomLayout : public AbstractModel
                {
                public:
                    CustomLayout();
                    ~CustomLayout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取混流画布参数
                     * @return Canvas 混流画布参数
                     * 
                     */
                    Canvas GetCanvas() const;

                    /**
                     * 设置混流画布参数
                     * @param _canvas 混流画布参数
                     * 
                     */
                    void SetCanvas(const Canvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     * 
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取流布局参数，每路流的布局不能超出画布区域
                     * @return InputStreamList 流布局参数，每路流的布局不能超出画布区域
                     * 
                     */
                    std::vector<StreamLayout> GetInputStreamList() const;

                    /**
                     * 设置流布局参数，每路流的布局不能超出画布区域
                     * @param _inputStreamList 流布局参数，每路流的布局不能超出画布区域
                     * 
                     */
                    void SetInputStreamList(const std::vector<StreamLayout>& _inputStreamList);

                    /**
                     * 判断参数 InputStreamList 是否已赋值
                     * @return InputStreamList 是否已赋值
                     * 
                     */
                    bool InputStreamListHasBeenSet() const;

                private:

                    /**
                     * 混流画布参数
                     */
                    Canvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * 流布局参数，每路流的布局不能超出画布区域
                     */
                    std::vector<StreamLayout> m_inputStreamList;
                    bool m_inputStreamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CUSTOMLAYOUT_H_
