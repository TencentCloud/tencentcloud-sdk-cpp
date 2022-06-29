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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SETPLAYLISTCOMMANDINPUT_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SETPLAYLISTCOMMANDINPUT_H_

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
                * 设置播放列表指令参数
                */
                class SetPlaylistCommandInput : public AbstractModel
                {
                public:
                    SetPlaylistCommandInput();
                    ~SetPlaylistCommandInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变更类型，取值有：
<li>Add：添加</li>
<li>Delete：删除</li>
<li>ClearList：清空歌曲列表</li>
<li>Move：移动歌曲</li>
                     * @return Type 变更类型，取值有：
<li>Add：添加</li>
<li>Delete：删除</li>
<li>ClearList：清空歌曲列表</li>
<li>Move：移动歌曲</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置变更类型，取值有：
<li>Add：添加</li>
<li>Delete：删除</li>
<li>ClearList：清空歌曲列表</li>
<li>Move：移动歌曲</li>
                     * @param Type 变更类型，取值有：
<li>Add：添加</li>
<li>Delete：删除</li>
<li>ClearList：清空歌曲列表</li>
<li>Move：移动歌曲</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取歌单索引位置，
当 Type 取 Add 时，-1表示添加在列表最后位置，大于-1表示要添加的位置；
当 Type 取 Delete 时，表示待删除歌曲的位置；
当 Type 取 Move 时，表示待调整歌曲的位置。
                     * @return Index 歌单索引位置，
当 Type 取 Add 时，-1表示添加在列表最后位置，大于-1表示要添加的位置；
当 Type 取 Delete 时，表示待删除歌曲的位置；
当 Type 取 Move 时，表示待调整歌曲的位置。
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置歌单索引位置，
当 Type 取 Add 时，-1表示添加在列表最后位置，大于-1表示要添加的位置；
当 Type 取 Delete 时，表示待删除歌曲的位置；
当 Type 取 Move 时，表示待调整歌曲的位置。
                     * @param Index 歌单索引位置，
当 Type 取 Add 时，-1表示添加在列表最后位置，大于-1表示要添加的位置；
当 Type 取 Delete 时，表示待删除歌曲的位置；
当 Type 取 Move 时，表示待调整歌曲的位置。
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取当 Type 取 Move 时，必填，表示移动歌曲的目标位置。
                     * @return ChangedIndex 当 Type 取 Move 时，必填，表示移动歌曲的目标位置。
                     */
                    int64_t GetChangedIndex() const;

                    /**
                     * 设置当 Type 取 Move 时，必填，表示移动歌曲的目标位置。
                     * @param ChangedIndex 当 Type 取 Move 时，必填，表示移动歌曲的目标位置。
                     */
                    void SetChangedIndex(const int64_t& _changedIndex);

                    /**
                     * 判断参数 ChangedIndex 是否已赋值
                     * @return ChangedIndex 是否已赋值
                     */
                    bool ChangedIndexHasBeenSet() const;

                    /**
                     * 获取歌曲 ID 列表，当 Type 取 Add 时，必填。
                     * @return MusicIds 歌曲 ID 列表，当 Type 取 Add 时，必填。
                     */
                    std::vector<std::string> GetMusicIds() const;

                    /**
                     * 设置歌曲 ID 列表，当 Type 取 Add 时，必填。
                     * @param MusicIds 歌曲 ID 列表，当 Type 取 Add 时，必填。
                     */
                    void SetMusicIds(const std::vector<std::string>& _musicIds);

                    /**
                     * 判断参数 MusicIds 是否已赋值
                     * @return MusicIds 是否已赋值
                     */
                    bool MusicIdsHasBeenSet() const;

                private:

                    /**
                     * 变更类型，取值有：
<li>Add：添加</li>
<li>Delete：删除</li>
<li>ClearList：清空歌曲列表</li>
<li>Move：移动歌曲</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 歌单索引位置，
当 Type 取 Add 时，-1表示添加在列表最后位置，大于-1表示要添加的位置；
当 Type 取 Delete 时，表示待删除歌曲的位置；
当 Type 取 Move 时，表示待调整歌曲的位置。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 当 Type 取 Move 时，必填，表示移动歌曲的目标位置。
                     */
                    int64_t m_changedIndex;
                    bool m_changedIndexHasBeenSet;

                    /**
                     * 歌曲 ID 列表，当 Type 取 Add 时，必填。
                     */
                    std::vector<std::string> m_musicIds;
                    bool m_musicIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SETPLAYLISTCOMMANDINPUT_H_
