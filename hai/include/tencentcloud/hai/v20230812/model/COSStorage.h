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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_COSSTORAGE_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_COSSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * cos挂载信息
                */
                class COSStorage : public AbstractModel
                {
                public:
                    COSStorage();
                    ~COSStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos桶uri
                     * @return URI cos桶uri
                     * 
                     */
                    std::string GetURI() const;

                    /**
                     * 设置cos桶uri
                     * @param _uRI cos桶uri
                     * 
                     */
                    void SetURI(const std::string& _uRI);

                    /**
                     * 判断参数 URI 是否已赋值
                     * @return URI 是否已赋值
                     * 
                     */
                    bool URIHasBeenSet() const;

                private:

                    /**
                     * cos桶uri
                     */
                    std::string m_uRI;
                    bool m_uRIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_COSSTORAGE_H_
