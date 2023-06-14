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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEIMAGERESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/ObjectInfo.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * CreateImage返回参数结构体
                */
                class CreateImageResponse : public AbstractModel
                {
                public:
                    CreateImageResponse();
                    ~CreateImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取输入图的主体信息。
若启用主体识别且在请求中指定了类目ID或主体区域，以指定的主体为准。若启用主体识别且没有指定，以最大面积主体为准。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Object 输入图的主体信息。
若启用主体识别且在请求中指定了类目ID或主体区域，以指定的主体为准。若启用主体识别且没有指定，以最大面积主体为准。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ObjectInfo GetObject() const;

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                private:

                    /**
                     * 输入图的主体信息。
若启用主体识别且在请求中指定了类目ID或主体区域，以指定的主体为准。若启用主体识别且没有指定，以最大面积主体为准。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ObjectInfo m_object;
                    bool m_objectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEIMAGERESPONSE_H_
