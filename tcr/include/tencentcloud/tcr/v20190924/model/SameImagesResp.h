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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_SAMEIMAGESRESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_SAMEIMAGESRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 指定tag镜像内容相同的tag列表
                */
                class SameImagesResp : public AbstractModel
                {
                public:
                    SameImagesResp();
                    ~SameImagesResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取tag列表
                     * @return SameImages tag列表
                     * 
                     */
                    std::vector<std::string> GetSameImages() const;

                    /**
                     * 设置tag列表
                     * @param _sameImages tag列表
                     * 
                     */
                    void SetSameImages(const std::vector<std::string>& _sameImages);

                    /**
                     * 判断参数 SameImages 是否已赋值
                     * @return SameImages 是否已赋值
                     * 
                     */
                    bool SameImagesHasBeenSet() const;

                private:

                    /**
                     * tag列表
                     */
                    std::vector<std::string> m_sameImages;
                    bool m_sameImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_SAMEIMAGESRESP_H_
