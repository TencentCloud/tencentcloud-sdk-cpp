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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 解析线路信息
                */
                class LineInfo : public AbstractModel
                {
                public:
                    LineInfo();
                    ~LineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线路名称
                     * @return Name 线路名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置线路名称
                     * @param _name 线路名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取线路ID
                     * @return LineId 线路ID
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置线路ID
                     * @param _lineId 线路ID
                     * 
                     */
                    void SetLineId(const std::string& _lineId);

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                private:

                    /**
                     * 线路名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 线路ID
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEINFO_H_
