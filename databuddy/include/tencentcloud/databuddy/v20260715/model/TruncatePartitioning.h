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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TRUNCATEPARTITIONING_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TRUNCATEPARTITIONING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 截断分区策略
                */
                class TruncatePartitioning : public AbstractModel
                {
                public:
                    TruncatePartitioning();
                    ~TruncatePartitioning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名
                     * @return FiledName 字段名
                     * 
                     */
                    std::string GetFiledName() const;

                    /**
                     * 设置字段名
                     * @param _filedName 字段名
                     * 
                     */
                    void SetFiledName(const std::string& _filedName);

                    /**
                     * 判断参数 FiledName 是否已赋值
                     * @return FiledName 是否已赋值
                     * 
                     */
                    bool FiledNameHasBeenSet() const;

                    /**
                     * 获取截取长度
                     * @return Width 截取长度
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置截取长度
                     * @param _width 截取长度
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                private:

                    /**
                     * 字段名
                     */
                    std::string m_filedName;
                    bool m_filedNameHasBeenSet;

                    /**
                     * 截取长度
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TRUNCATEPARTITIONING_H_
