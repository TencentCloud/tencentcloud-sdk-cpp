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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_LYMPHNODE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_LYMPHNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Part.h>
#include <tencentcloud/mrs/v20200910/model/Coord.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 单淋巴结转移信息
                */
                class LymphNode : public AbstractModel
                {
                public:
                    LymphNode();
                    ~LymphNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名称
                     * @return Name 项目名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
                     * @param _name 项目名称
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
                     * 获取索引
                     * @return Index 索引
                     * 
                     */
                    std::vector<int64_t> GetIndex() const;

                    /**
                     * 设置索引
                     * @param _index 索引
                     * 
                     */
                    void SetIndex(const std::vector<int64_t>& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取部位
                     * @return Part 部位
                     * 
                     */
                    Part GetPart() const;

                    /**
                     * 设置部位
                     * @param _part 部位
                     * 
                     */
                    void SetPart(const Part& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     * 
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取原文
                     * @return Src 原文
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
                     * @param _src 原文
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取总数量
                     * @return Total 总数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数量
                     * @param _total 总数量
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取转移数量
                     * @return TransferNum 转移数量
                     * 
                     */
                    int64_t GetTransferNum() const;

                    /**
                     * 设置转移数量
                     * @param _transferNum 转移数量
                     * 
                     */
                    void SetTransferNum(const int64_t& _transferNum);

                    /**
                     * 判断参数 TransferNum 是否已赋值
                     * @return TransferNum 是否已赋值
                     * 
                     */
                    bool TransferNumHasBeenSet() const;

                    /**
                     * 获取淋巴结大小
                     * @return Sizes 淋巴结大小
                     * 
                     */
                    std::vector<int64_t> GetSizes() const;

                    /**
                     * 设置淋巴结大小
                     * @param _sizes 淋巴结大小
                     * 
                     */
                    void SetSizes(const std::vector<int64_t>& _sizes);

                    /**
                     * 判断参数 Sizes 是否已赋值
                     * @return Sizes 是否已赋值
                     * 
                     */
                    bool SizesHasBeenSet() const;

                    /**
                     * 获取原文对应坐标
                     * @return Coords 原文对应坐标
                     * 
                     */
                    std::vector<Coord> GetCoords() const;

                    /**
                     * 设置原文对应坐标
                     * @param _coords 原文对应坐标
                     * 
                     */
                    void SetCoords(const std::vector<Coord>& _coords);

                    /**
                     * 判断参数 Coords 是否已赋值
                     * @return Coords 是否已赋值
                     * 
                     */
                    bool CoordsHasBeenSet() const;

                private:

                    /**
                     * 项目名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 索引
                     */
                    std::vector<int64_t> m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 部位
                     */
                    Part m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 原文
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 总数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 转移数量
                     */
                    int64_t m_transferNum;
                    bool m_transferNumHasBeenSet;

                    /**
                     * 淋巴结大小
                     */
                    std::vector<int64_t> m_sizes;
                    bool m_sizesHasBeenSet;

                    /**
                     * 原文对应坐标
                     */
                    std::vector<Coord> m_coords;
                    bool m_coordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_LYMPHNODE_H_
