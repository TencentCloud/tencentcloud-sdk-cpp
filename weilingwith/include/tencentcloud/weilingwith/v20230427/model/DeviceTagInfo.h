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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICETAGINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICETAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备标签信息
                */
                class DeviceTagInfo : public AbstractModel
                {
                public:
                    DeviceTagInfo();
                    ~DeviceTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签Id
                     * @return TagId 标签Id
                     * 
                     */
                    int64_t GetTagId() const;

                    /**
                     * 设置标签Id
                     * @param _tagId 标签Id
                     * 
                     */
                    void SetTagId(const int64_t& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取标签名字
                     * @return TagName 标签名字
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置标签名字
                     * @param _tagName 标签名字
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                private:

                    /**
                     * 标签Id
                     */
                    int64_t m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * 标签名字
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICETAGINFO_H_
