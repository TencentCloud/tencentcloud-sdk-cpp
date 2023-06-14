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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_KTVSINGERBASEINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_KTVSINGERBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * KTV 歌手基础信息
                */
                class KTVSingerBaseInfo : public AbstractModel
                {
                public:
                    KTVSingerBaseInfo();
                    ~KTVSingerBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌手id
                     * @return SingerId 歌手id
                     * 
                     */
                    std::string GetSingerId() const;

                    /**
                     * 设置歌手id
                     * @param _singerId 歌手id
                     * 
                     */
                    void SetSingerId(const std::string& _singerId);

                    /**
                     * 判断参数 SingerId 是否已赋值
                     * @return SingerId 是否已赋值
                     * 
                     */
                    bool SingerIdHasBeenSet() const;

                    /**
                     * 获取歌手名
                     * @return Name 歌手名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置歌手名
                     * @param _name 歌手名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 歌手id
                     */
                    std::string m_singerId;
                    bool m_singerIdHasBeenSet;

                    /**
                     * 歌手名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_KTVSINGERBASEINFO_H_
