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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_TAG_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 标签
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库标识
                     * @return Fid 数据库标识
                     * 
                     */
                    int64_t GetFid() const;

                    /**
                     * 设置数据库标识
                     * @param _fid 数据库标识
                     * 
                     */
                    void SetFid(const int64_t& _fid);

                    /**
                     * 判断参数 Fid 是否已赋值
                     * @return Fid 是否已赋值
                     * 
                     */
                    bool FidHasBeenSet() const;

                    /**
                     * 获取标签名称字段
                     * @return Fname 标签名称字段
                     * 
                     */
                    std::string GetFname() const;

                    /**
                     * 设置标签名称字段
                     * @param _fname 标签名称字段
                     * 
                     */
                    void SetFname(const std::string& _fname);

                    /**
                     * 判断参数 Fname 是否已赋值
                     * @return Fname 是否已赋值
                     * 
                     */
                    bool FnameHasBeenSet() const;

                private:

                    /**
                     * 数据库标识
                     */
                    int64_t m_fid;
                    bool m_fidHasBeenSet;

                    /**
                     * 标签名称字段
                     */
                    std::string m_fname;
                    bool m_fnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_TAG_H_
